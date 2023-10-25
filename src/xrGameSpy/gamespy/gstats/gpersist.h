/******
gpersist.h
GameSpy Persistent Storage SDK 
  
Copyright 1999-2007 GameSpy Industries, Inc

******

Please see the GameSpy Persistent Storage SDK for more info

*****/
//todo: get/set @ offset / length

#ifndef _GPERSIST_H_
#define _GPERSIST_H_

#include "gstats.h"


#ifdef __cplusplus
extern "C" {
#endif

/*************************
The following defines and prototypes are included
inside the "gstats.h" file, but listed here as well for easy reference
since they are also used by the Persistent Storage SDK.
The comments for them have also been changed to reflect their
specific use inside the Persistent Storage SDK.
**************************/
#if 0
	/* Error codes */
	#define GE_NOERROR		0
	#define GE_NOSOCKET		1 /* Unable to create a socket */
	#define GE_NODNS		2 /* Unable to resolve a DNS name */
	#define GE_NOCONNECT	3 /* Unable to connect to stats server, or connection lost */
	#define GE_BUSY			4 /* Not used */
	#define GE_DATAERROR	5 /* Bad data from the stats server */

	/* You need to fill these in with your game-specific info */
	extern char gcd_secret_key[256];
	extern char gcd_gamename[256];

	/********
	InitStatsConnection

	DESCRIPTION
	Opens a connection to the stats / persistent storage server. Should be done before calling
	any of the other persistent storage functions. May block for 1-2 secs
	while the connection is established so you will want to do this before
	gameplay starts or in another thread.

	PARAMETERS
	gameport: integer port associated with your server (may be the same as
		your developer spec query port). If not	appropriate for your game, pass in 0.

	RETURNS
	GE_NODNS: Unable to resolve stats server DNS
	GE_NOSOCKET: Unable to create data socket
	GE_NOCONNECT: Unable to connect to stats server
	GE_DATAERROR: Unable to receive challenge from stats server, or bad challenge
	GE_NOERROR: Connected to stats server and ready to send data

	Note: If the connection fails, all Persistent Storage functions will fail.
	*********/
	int InitStatsConnection(int gameport);

	/********
	IsStatsConnected

	DESCRIPTION
	Returns whether or not you are currently connected to the stats server. Even
	if your initial connection was successful, you may lose connection later and
	want to try to reconnnect.
	If a callback returns unsuccessfully, check this function to see if it was
	because of a disconnection.

	RETURNS
	1 if connected, 0 otherwise
	*********/
	int IsStatsConnected();

	/********
	CloseStatsConnection

	DESCRIPTION
	Closes the connection to the stats server. You should do this when done
	with the connection.
	*********/
	void CloseStatsConnection(void);

	/********
	GetChallenge

	DESCRIPTION
	Returns the string to pass as the challenge to the GenerateAuth function.

	PARAMETERS
	game: Pass in NULL (or your current game, if you are also using the Stats SDK)

	RETURNS
	A string to pass to GenerateAuth to create the authentication hash
	*********/
	char *GetChallenge(statsgame_t game);

	/********
	GenerateAuth

	DESCRIPTION
	Used to generate on the "challengeresponse" parameter for the PreAuthenticatePlayer
	functions. 

	PARAMETERS
	challenge: The challenge string generated by GetChallange.
	password: The CD Key (un-hashed) or profile password
	response: The output authentication string

	RETURNS
	A pointer to response
	*********/
	char *GenerateAuth(char *challenge, gsi_char *password,/*[out]*/char response[33]);
#endif //#ifdef 0 section from gstats.h

/*************************
The rest of the prototypes in this file are specific to
the Persistent Storage SDK
**************************/

#ifndef GSI_UNICODE
#define GenerateAuth				GenerateAuthA
#define PreAuthenticatePlayerCD		PreAuthenticatePlayerCDA
#define GetProfileIDFromCD			GetProfileIDFromCDA
#define GetPersistDataValues		GetPersistDataValuesA
#define GetPersistDataValuesModified GetPersistDataValuesModifiedA
#define SetPersistDataValues		SetPersistDataValuesA
#else
#define GenerateAuth				GenerateAuthW
#define PreAuthenticatePlayerCD		PreAuthenticatePlayerCDW
#define GetProfileIDFromCD			GetProfileIDFromCDW
#define GetPersistDataValues		GetPersistDataValuesW
#define GetPersistDataValuesModified GetPersistDataValuesModifiedW
#define SetPersistDataValues		SetPersistDataValuesW
#endif

/********
persisttype_t
There are 4 types of persistent data stored for each player:
pd_private_ro: Readable only by the authenticated client it belongs to, can only by set on the server
pd_private_rw: Readable only by the authenticated client it belongs to, set by the authenticated client it belongs to
pd_public_ro: Readable by any client, can only be set on the server
pd_public_rw: Readable by any client, set by the authenicated client is belongs to
*********/
typedef enum {pd_private_ro, pd_private_rw, pd_public_ro, pd_public_rw} persisttype_t;

/*****************
CALLBACK FUNCTIONS
*****************/

/****************
PersAuthCallbackFn

DESCRIPTION
This type of function is passed to the two PreAuthentication functions.
It returns the result of the Authentication request.

PARAMETERS
localid: The localid number passed into the PreAuthenticate function
profileid: If authentication was successful, the profileid for this user
authenticated: 1 if the player was authenticated < 1 otherwise
errmsg: Error returned by the server to indicate why the player was not authenticated
instance: Opaque value passed into the PreAuthenticate function (for your use)
*****************/
typedef void (*PersAuthCallbackFn)(int localid, int profileid, int authenticated, gsi_char *errmsg, void *instance);


/****************
PersDataCallbackFn

DESCRIPTION
This type of function is passed to the two GetPersistData functions.
It returns the result of the data request.
localid
  
PARAMETERS
localid: The localid number passed into the GetPersistData function
profileid: The profileid of the user who the data was requested for
type: The type of persistent data being returned
index: The persistent data index
success: 1 if the data was retrieved successfully 
		 2 if the data had not been modified since the time requested
		< 1 if there was an error
modified: The last time the data for this index was modified (any persist type)
		Only returned if success is 1
data: Pointer to the data being returned. Note: you must use or copy
	off the data before returning from the callback, as it may be freed or overwritten
	once the callback is complete.
len:  Length of the data being returned. 0 indicates that no data was stored on the server
	(if success was 1)
instance: Opaque value passed into the GetPersistData function (for your use)
*****************/
typedef void (*PersDataCallbackFn)(int localid, int profileid, persisttype_t type, int index, int success, time_t modified, char *data, int len, void *instance);

/****************
PersDataSaveCallbackFn

DESCRIPTION
This type of function is passed to the two SetPersistData functions.
It returns the result of the set data request.

PARAMETERS
localid: The localid number passed into the SetPersistData function
profileid: The profileid of the user who the data is being saved for
success: 1 if the data was saved successfully, < 1 otherwise
modified: The time recorded on the backend for last modification
instance: Opaque value passed into the SetPersistData function (for your use)
*****************/
typedef void (*PersDataSaveCallbackFn)(int localid, int profileid, persisttype_t type, int index, int success, time_t modified, void *instance);

/****************
ProfileCallbackFn

DESCRIPTION
This type of function is passed to the GetProfileIDFromCD function.
It returns the result of the lookup request.

PARAMETERS
localid: The localid number passed into the GetProfileIDFromCD function
profileid: The profileid of the requested user, if the lookup was successful
success: 1 if the lookup was successful, < 1 otherwise
instance: Opaque value passed into the GetProfileIDFromCD function (for your use)
*****************/
typedef void (*ProfileCallbackFn)(int localid, int profileid, int success, void *instance);


/***************************
PERSISTENT STORAGE FUNCTIONS
****************************/

/****************
PreAuthenticatePlayerPM
PreAuthenticatePlayerCD

DESCRIPTION
These two functions are used to authenticate a player on the Stats server.
A player MUST be authenticated before getting private persistent data, or
setting public or private data.
If the StatsServer connection is ever lost and reconnected (using InitStatsConnection)
the player must be reauthenticated before reading / writing their data.
PreAuthenticatePlayerPM authenticates players using the Presence & Messaging SDK account info
PreAuthenticatePlayerCD authenticates players using the CDKey SDK CD Key.
Typically you will only use one of these in your game (depending on whether you use
the Presence & Messaging SDK, or the CD Key SDK), however they can both be used in the
same game if needed.

PARAMETERS
localid: Your game-specific reference number for this player, returned in the callback
	to allow you to identify which player it is referring to.
profileid: (PreAuthenticatePlayerPM) The profileid of the player being authenicated. This can be obtained in the 
	Presence & Messaging SDK through gpIDFromProfile()
nick: (PreAuthenticatePlayerCD) Nickname of the player to authenticate. Note that the nickname is not actually
	authenticated, it is simply used to determine which profile under the authenticated CD Key to use.
	Each CD Key can have mutiple profiles, each using a different nick.
keyhash: (PreAuthenticatePlayerCD) Hash of the player's CD Key. If used on the server, this can be obtained from gcd_getkeyhash
	On the client, you can easily get the hash by calling GenerateAuth() with challenge as an empty string ("")
	and the CD Key has the password parameter.
challengeresponse: Result of the GenerateAuth() call, after passing in the challenge and the client's 
	password or CD Key
PersAuthCallbackFn: Callback to be called after the authentication is complete
instance: Pointer that will be passed to the callback function (for your use)
	Typically used for passing an object or structure pointer into the callback.
*****************/
void PreAuthenticatePlayerPartner(int localid, const char* authtoken, const char *challengeresponse, PersAuthCallbackFn callback, void *instance);
void PreAuthenticatePlayerPM(int localid, int profileid,  const char *challengeresponse, PersAuthCallbackFn callback, void *instance);
void PreAuthenticatePlayerCD(int localid, const gsi_char *nick, const char *keyhash, const char *challengeresponse, PersAuthCallbackFn callback, void *instance);

/****************
GetProfileIDFromCD

DESCRIPTION
Given a nickname and CD Key hash, this will lookup the profileid for the user.
If the user has never authenticated (and has no persistent data associated with them),
the callback will indicate a failure. No persistent data can be retreived for the user,
since they don't have any stored. Persistent data can be stored, but only after authenticating
with PreAuthenticatePlayerCD.

PARAMETERS
localid: Your game-specific reference number for this player, returned in the callback
	to allow you to identify which player it is referring to.
nick: The nick of the user whose profileid you are looking up
keyhash: The CD Key Hash of the user whose profileid you are looking up
ProfileCallbackFn: Callback to be called when the lookup is completed
instance: Pointer that will be passed to the callback function (for your use)
*****************/
void GetProfileIDFromCD(int localid, const gsi_char *nick, const char *keyhash, ProfileCallbackFn callback, void *instance);

/****************
GetPersistData[Modified]

DESCRIPTION
Gets the entire block of persistent data for a user.
The data and length are returned in the callback function.
Note that only an authenticated player can get their private data. Any
player can get any other player's public data.

PARAMETERS
localid: Your game-specific reference number for this player, returned in the callback
	to allow you to identify which player it is referring to.
profileid: The profileid of the player whose data you are looking up. 
	Returned by gpIDFromProfile() in the Presence & Messaging SDK, or using GetProfileIDFromCD
type: The type of persistent data you are looking up
index: Each profile can have multiple persistent data records associated with them. Usually you
	just want to use index 0.
modifiedsince: A time value to limit the request for data. Data will only be returned if it has been
	modified since the time provided. If data has not been modified since that time, the callback will be
	called with a success value that indicates it is unmodified.
	Note: modification time is tracked for the given profileid/index, not on a per persisttype basis
PersDataCallbackFn: Callback that will be called with the data when it is returned
ProfileCallbackFn: Callback to be called when the lookup is completed
instance: Pointer that will be passed to the callback function (for your use)
*****************/
void GetPersistData(int localid, int profileid, persisttype_t type, int index, PersDataCallbackFn callback, void *instance);
void GetPersistDataModified(int localid, int profileid, persisttype_t type, int index, time_t modifiedsince, PersDataCallbackFn callback, void *instance);

/****************
GetPersistDataValues[Modified]

DESCRIPTION
If you store your data in key\value delimited pairs, GetPersistDataValues will
allow you to easily retrieve a subset of the stored data. To retrieve the entire
data set, use GetPersistData. The data will be returned as a null-terminated string,
unless no data is available (in which case len will be 0 in the callback).

PARAMETERS
localid: Your game-specific reference number for this player, returned in the callback
	to allow you to identify which player it is referring to.
profileid: The profileid of the player whose data you are looking up. 
	Returned by gpIDFromProfile() in the Presence & Messaging SDK, or using GetProfileIDFromCD
type: The type of persistent data you are looking up
index: Each profile can have multiple persistent data records associated with them. Usually you
	just want to use index 0.
modifiedsince: A time value to limit the request for data. Data will only be returned if it has been
	modified since the time provided. If data has not been modified since that time, the callback will be
	called with a success value that indicates it is unmodified.
	Note: modification time is tracked for the given profileid/index, not on a per-persisttype or per-key basis
keys: A "\" delimited list of the keys you want returned (for example: "\clan\color\homepage\birthday")
PersDataCallbackFn: Callback that will be called with the data when it is returned
instance: Pointer that will be passed to the callback function (for your use)
*****************/
void GetPersistDataValues(int localid, int profileid, persisttype_t type, int index, gsi_char *keys, PersDataCallbackFn callback, void *instance);
void GetPersistDataValuesModified(int localid, int profileid, persisttype_t type, int index, time_t modifiedsince, gsi_char *keys, PersDataCallbackFn callback, void *instance);

/****************
SetPersistData

DESCRIPTION
Sets the entire block of persistent data for a user.
The profileid for whom the data is being set MUST have been authenticated already.

PARAMETERS
localid: Your game-specific reference number for this player, returned in the callback
	to allow you to identify which player it is referring to.
profileid: The profileid of the player whose data you are setting. 
	The player must have already been authenticated with one of the PreAuthenticatePlayer functions.
type: The type of persistent data you are setting. Only rw data is setable.
index: Each profile can have multiple persistent data records associated with them. Usually you
	just want to use index 0.
data: The persistent data to be saved
len: The length of the data. If you are setting key\value delimited data, make 
	sure the "len" parameter includes length of the null terminator
PersDataSaveCallbackFn: Callback that will be called with the data save is complete
instance: Pointer that will be passed to the callback function (for your use)
*****************/
void SetPersistData(int localid, int profileid, persisttype_t type, int index, const char *data, int len, PersDataSaveCallbackFn callback, void *instance);

/****************
SetPersistDataValues

DESCRIPTION
If you are saving data in key\value delimited format, you can use this function
to only set SOME of the key\value pairs. Only the key value pairs you include in
they keyvalues parameter will be updated, the other pairs will stay the same.

PARAMETERS
localid: Your game-specific reference number for this player, returned in the callback
	to allow you to identify which player it is referring to.
profileid: The profileid of the player whose data you are setting. 
	The player must have already been authenticated with one of the PreAuthenticatePlayer functions.
type: The type of persistent data you are setting. Only rw data is setable.
index: Each profile can have multiple persistent data records associated with them. Usually you
	just want to use index 0.
keyvalues: The key\value pairs to be updated (for example: \clan\The A-Team\homepage\http://www.myclan.net\age\15)
PersDataSaveCallbackFn: Callback that will be called with the data save is complete
instance: Pointer that will be passed to the callback function (for your use)
*****************/
void SetPersistDataValues(int localid, int profileid, persisttype_t type, int index, const gsi_char *keyvalues, PersDataSaveCallbackFn callback, void *instance);

/****************
PersistThink

DESCRIPTION
This function needs to be called any time a asynchronous operation is in progress. It will
check for the incoming replies and call the callbacks associated with them as needed.
It's recommened that you call this in your main loop at all times while you are connected
to the stats server, so that if the stats server disconnects it can be detected immediately.

RETURNS
0 if the connection to the stats server is lost, 1 otherwise
*****************/
int PersistThink();

#ifdef __cplusplus
}
#endif

#endif
