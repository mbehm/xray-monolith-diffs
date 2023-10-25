///////////////////////////////////////////////////////////////////////////////
// GameSpy ATLAS Competition System Source File
//
// NOTE: This is an auto-generated file, do not edit this file directly.
///////////////////////////////////////////////////////////////////////////////

#include <string.h>
#include "atlas_stalkercoppc_v1.h"

int atlas_rule_set_version = 1;

int ATLAS_GET_KEY(char* keyName)
{
   if(!keyName)
      return 0;
   
   if(!strcmp("KEY_BestScore_KillsInRow", keyName))
      return KEY_BestScore_KillsInRow;   
   if(!strcmp("KEY_BestScore_KnifeKillsInRow", keyName))
      return KEY_BestScore_KnifeKillsInRow;   
   if(!strcmp("KEY_BestScore_BackstabsKillsInRow", keyName))
      return KEY_BestScore_BackstabsKillsInRow;   
   if(!strcmp("KEY_BestScore_HeadshotsKillsInRow", keyName))
      return KEY_BestScore_HeadshotsKillsInRow;   
   if(!strcmp("KEY_BestScore_EyeKillsInRow", keyName))
      return KEY_BestScore_EyeKillsInRow;   
   if(!strcmp("KEY_BestScore_BleedKillsInRow", keyName))
      return KEY_BestScore_BleedKillsInRow;   
   if(!strcmp("KEY_BestScore_ExplosiveKillsInRow", keyName))
      return KEY_BestScore_ExplosiveKillsInRow;   
   if(!strcmp("KEY_AwardMasscare", keyName))
      return KEY_AwardMasscare;   
   if(!strcmp("KEY_AwardMasscareLastRewardDate", keyName))
      return KEY_AwardMasscareLastRewardDate;   
   if(!strcmp("KEY_AwardParanoia", keyName))
      return KEY_AwardParanoia;   
   if(!strcmp("KEY_AwardParanoiaLastRewardDate", keyName))
      return KEY_AwardParanoiaLastRewardDate;   
   if(!strcmp("KEY_AwardOverwhelmingSuperiority", keyName))
      return KEY_AwardOverwhelmingSuperiority;   
   if(!strcmp("KEY_AwardOverwhelmingSuperiorityLastRewardDate", keyName))
      return KEY_AwardOverwhelmingSuperiorityLastRewardDate;   
   if(!strcmp("KEY_AwardBlitzkrieg", keyName))
      return KEY_AwardBlitzkrieg;   
   if(!strcmp("KEY_AwardBlitzkriegLastRewardDate", keyName))
      return KEY_AwardBlitzkriegLastRewardDate;   
   if(!strcmp("KEY_AwardDryVictory", keyName))
      return KEY_AwardDryVictory;   
   if(!strcmp("KEY_AwardDryVictoryLastRewardDate", keyName))
      return KEY_AwardDryVictoryLastRewardDate;   
   if(!strcmp("KEY_AwardMultichampion", keyName))
      return KEY_AwardMultichampion;   
   if(!strcmp("KEY_AwardMultichampionLastRewardDate", keyName))
      return KEY_AwardMultichampionLastRewardDate;   
   if(!strcmp("KEY_AwardMad", keyName))
      return KEY_AwardMad;   
   if(!strcmp("KEY_AwardMadLastRewardDate", keyName))
      return KEY_AwardMadLastRewardDate;   
   if(!strcmp("KEY_AwardAchillesHeel", keyName))
      return KEY_AwardAchillesHeel;   
   if(!strcmp("KEY_AwardAchillesHeelLastRewardDate", keyName))
      return KEY_AwardAchillesHeelLastRewardDate;   
   if(!strcmp("KEY_AwardFasterThanBullets", keyName))
      return KEY_AwardFasterThanBullets;   
   if(!strcmp("KEY_AwardFasterThanBulletsLastRewardDate", keyName))
      return KEY_AwardFasterThanBulletsLastRewardDate;   
   if(!strcmp("KEY_AwardHarvestTime", keyName))
      return KEY_AwardHarvestTime;   
   if(!strcmp("KEY_AwardHarvestTimeLastRewardDate", keyName))
      return KEY_AwardHarvestTimeLastRewardDate;   
   if(!strcmp("KEY_AwardSkewer", keyName))
      return KEY_AwardSkewer;   
   if(!strcmp("KEY_AwardSkewerLastRewardDate", keyName))
      return KEY_AwardSkewerLastRewardDate;   
   if(!strcmp("KEY_AwardDoubleShotDoubleKill", keyName))
      return KEY_AwardDoubleShotDoubleKill;   
   if(!strcmp("KEY_AwardDoubleShotDoubleKillLastRewardDate", keyName))
      return KEY_AwardDoubleShotDoubleKillLastRewardDate;   
   if(!strcmp("KEY_AwardClimber", keyName))
      return KEY_AwardClimber;   
   if(!strcmp("KEY_AwardClimberLastRewardDate", keyName))
      return KEY_AwardClimberLastRewardDate;   
   if(!strcmp("KEY_AwardOpener", keyName))
      return KEY_AwardOpener;   
   if(!strcmp("KEY_AwardOpenerLastRewardDate", keyName))
      return KEY_AwardOpenerLastRewardDate;   
   if(!strcmp("KEY_AwardToughy", keyName))
      return KEY_AwardToughy;   
   if(!strcmp("KEY_AwardToughyLastRewardDate", keyName))
      return KEY_AwardToughyLastRewardDate;   
   if(!strcmp("KEY_AwardInvincibleFury", keyName))
      return KEY_AwardInvincibleFury;   
   if(!strcmp("KEY_AwardInvincibleFuryLastRewardDate", keyName))
      return KEY_AwardInvincibleFuryLastRewardDate;   
   if(!strcmp("KEY_AwardOculist", keyName))
      return KEY_AwardOculist;   
   if(!strcmp("KEY_AwardOculistLastRewardDate", keyName))
      return KEY_AwardOculistLastRewardDate;   
   if(!strcmp("KEY_AwardLightingReflexes", keyName))
      return KEY_AwardLightingReflexes;   
   if(!strcmp("KEY_AwardLightingReflexesLastRewardDate", keyName))
      return KEY_AwardLightingReflexesLastRewardDate;   
   if(!strcmp("KEY_AwardSprinterStopper", keyName))
      return KEY_AwardSprinterStopper;   
   if(!strcmp("KEY_AwardSprinterStopperLastRewardDate", keyName))
      return KEY_AwardSprinterStopperLastRewardDate;   
   if(!strcmp("KEY_AwardMarksMan", keyName))
      return KEY_AwardMarksMan;   
   if(!strcmp("KEY_AwardMarksManLastRewardDate", keyName))
      return KEY_AwardMarksManLastRewardDate;   
   if(!strcmp("KEY_AwardPeaceAmbassador", keyName))
      return KEY_AwardPeaceAmbassador;   
   if(!strcmp("KEY_AwardPeaceAmbassadorLastRewardDate", keyName))
      return KEY_AwardPeaceAmbassadorLastRewardDate;   
   if(!strcmp("KEY_AwardDeadlyAccuracy", keyName))
      return KEY_AwardDeadlyAccuracy;   
   if(!strcmp("KEY_AwardDeadlyAccuracyLastRewardDate", keyName))
      return KEY_AwardDeadlyAccuracyLastRewardDate;   
   if(!strcmp("KEY_AwardRemembrance", keyName))
      return KEY_AwardRemembrance;   
   if(!strcmp("KEY_AwardRemembranceLastRewardDate", keyName))
      return KEY_AwardRemembranceLastRewardDate;   
   if(!strcmp("KEY_AwardAvenger", keyName))
      return KEY_AwardAvenger;   
   if(!strcmp("KEY_AwardAvengerLastRewardDate", keyName))
      return KEY_AwardAvengerLastRewardDate;   
   if(!strcmp("KEY_AwardCherub", keyName))
      return KEY_AwardCherub;   
   if(!strcmp("KEY_AwardCherubLastRewardDate", keyName))
      return KEY_AwardCherubLastRewardDate;   
   if(!strcmp("KEY_AwardDignity", keyName))
      return KEY_AwardDignity;   
   if(!strcmp("KEY_AwardDignityLastRewardDate", keyName))
      return KEY_AwardDignityLastRewardDate;   
   if(!strcmp("KEY_AwardStalkerFlair", keyName))
      return KEY_AwardStalkerFlair;   
   if(!strcmp("KEY_AwardStalkerFlairLastRewardDate", keyName))
      return KEY_AwardStalkerFlairLastRewardDate;   
   if(!strcmp("KEY_AwardLucky", keyName))
      return KEY_AwardLucky;   
   if(!strcmp("KEY_AwardLuckyLastRewardDate", keyName))
      return KEY_AwardLuckyLastRewardDate;   
   if(!strcmp("KEY_AwardBlackList", keyName))
      return KEY_AwardBlackList;   
   if(!strcmp("KEY_AwardBlackListLastRewardDate", keyName))
      return KEY_AwardBlackListLastRewardDate;   
   if(!strcmp("KEY_AwardSilentDeath", keyName))
      return KEY_AwardSilentDeath;   
   if(!strcmp("KEY_AwardSilentDeathLastRewardDate", keyName))
      return KEY_AwardSilentDeathLastRewardDate;   
   if(!strcmp("KEY_PlayerName", keyName))
      return KEY_PlayerName;   
   
   return 0;
}

char* ATLAS_GET_KEY_NAME(int keyId)
{
   if(keyId <= 0)
      return "";
   
   if(keyId == KEY_BestScore_KillsInRow)
      return "KEY_BestScore_KillsInRow";   
   if(keyId == KEY_BestScore_KnifeKillsInRow)
      return "KEY_BestScore_KnifeKillsInRow";   
   if(keyId == KEY_BestScore_BackstabsKillsInRow)
      return "KEY_BestScore_BackstabsKillsInRow";   
   if(keyId == KEY_BestScore_HeadshotsKillsInRow)
      return "KEY_BestScore_HeadshotsKillsInRow";   
   if(keyId == KEY_BestScore_EyeKillsInRow)
      return "KEY_BestScore_EyeKillsInRow";   
   if(keyId == KEY_BestScore_BleedKillsInRow)
      return "KEY_BestScore_BleedKillsInRow";   
   if(keyId == KEY_BestScore_ExplosiveKillsInRow)
      return "KEY_BestScore_ExplosiveKillsInRow";   
   if(keyId == KEY_AwardMasscare)
      return "KEY_AwardMasscare";   
   if(keyId == KEY_AwardMasscareLastRewardDate)
      return "KEY_AwardMasscareLastRewardDate";   
   if(keyId == KEY_AwardParanoia)
      return "KEY_AwardParanoia";   
   if(keyId == KEY_AwardParanoiaLastRewardDate)
      return "KEY_AwardParanoiaLastRewardDate";   
   if(keyId == KEY_AwardOverwhelmingSuperiority)
      return "KEY_AwardOverwhelmingSuperiority";   
   if(keyId == KEY_AwardOverwhelmingSuperiorityLastRewardDate)
      return "KEY_AwardOverwhelmingSuperiorityLastRewardDate";   
   if(keyId == KEY_AwardBlitzkrieg)
      return "KEY_AwardBlitzkrieg";   
   if(keyId == KEY_AwardBlitzkriegLastRewardDate)
      return "KEY_AwardBlitzkriegLastRewardDate";   
   if(keyId == KEY_AwardDryVictory)
      return "KEY_AwardDryVictory";   
   if(keyId == KEY_AwardDryVictoryLastRewardDate)
      return "KEY_AwardDryVictoryLastRewardDate";   
   if(keyId == KEY_AwardMultichampion)
      return "KEY_AwardMultichampion";   
   if(keyId == KEY_AwardMultichampionLastRewardDate)
      return "KEY_AwardMultichampionLastRewardDate";   
   if(keyId == KEY_AwardMad)
      return "KEY_AwardMad";   
   if(keyId == KEY_AwardMadLastRewardDate)
      return "KEY_AwardMadLastRewardDate";   
   if(keyId == KEY_AwardAchillesHeel)
      return "KEY_AwardAchillesHeel";   
   if(keyId == KEY_AwardAchillesHeelLastRewardDate)
      return "KEY_AwardAchillesHeelLastRewardDate";   
   if(keyId == KEY_AwardFasterThanBullets)
      return "KEY_AwardFasterThanBullets";   
   if(keyId == KEY_AwardFasterThanBulletsLastRewardDate)
      return "KEY_AwardFasterThanBulletsLastRewardDate";   
   if(keyId == KEY_AwardHarvestTime)
      return "KEY_AwardHarvestTime";   
   if(keyId == KEY_AwardHarvestTimeLastRewardDate)
      return "KEY_AwardHarvestTimeLastRewardDate";   
   if(keyId == KEY_AwardSkewer)
      return "KEY_AwardSkewer";   
   if(keyId == KEY_AwardSkewerLastRewardDate)
      return "KEY_AwardSkewerLastRewardDate";   
   if(keyId == KEY_AwardDoubleShotDoubleKill)
      return "KEY_AwardDoubleShotDoubleKill";   
   if(keyId == KEY_AwardDoubleShotDoubleKillLastRewardDate)
      return "KEY_AwardDoubleShotDoubleKillLastRewardDate";   
   if(keyId == KEY_AwardClimber)
      return "KEY_AwardClimber";   
   if(keyId == KEY_AwardClimberLastRewardDate)
      return "KEY_AwardClimberLastRewardDate";   
   if(keyId == KEY_AwardOpener)
      return "KEY_AwardOpener";   
   if(keyId == KEY_AwardOpenerLastRewardDate)
      return "KEY_AwardOpenerLastRewardDate";   
   if(keyId == KEY_AwardToughy)
      return "KEY_AwardToughy";   
   if(keyId == KEY_AwardToughyLastRewardDate)
      return "KEY_AwardToughyLastRewardDate";   
   if(keyId == KEY_AwardInvincibleFury)
      return "KEY_AwardInvincibleFury";   
   if(keyId == KEY_AwardInvincibleFuryLastRewardDate)
      return "KEY_AwardInvincibleFuryLastRewardDate";   
   if(keyId == KEY_AwardOculist)
      return "KEY_AwardOculist";   
   if(keyId == KEY_AwardOculistLastRewardDate)
      return "KEY_AwardOculistLastRewardDate";   
   if(keyId == KEY_AwardLightingReflexes)
      return "KEY_AwardLightingReflexes";   
   if(keyId == KEY_AwardLightingReflexesLastRewardDate)
      return "KEY_AwardLightingReflexesLastRewardDate";   
   if(keyId == KEY_AwardSprinterStopper)
      return "KEY_AwardSprinterStopper";   
   if(keyId == KEY_AwardSprinterStopperLastRewardDate)
      return "KEY_AwardSprinterStopperLastRewardDate";   
   if(keyId == KEY_AwardMarksMan)
      return "KEY_AwardMarksMan";   
   if(keyId == KEY_AwardMarksManLastRewardDate)
      return "KEY_AwardMarksManLastRewardDate";   
   if(keyId == KEY_AwardPeaceAmbassador)
      return "KEY_AwardPeaceAmbassador";   
   if(keyId == KEY_AwardPeaceAmbassadorLastRewardDate)
      return "KEY_AwardPeaceAmbassadorLastRewardDate";   
   if(keyId == KEY_AwardDeadlyAccuracy)
      return "KEY_AwardDeadlyAccuracy";   
   if(keyId == KEY_AwardDeadlyAccuracyLastRewardDate)
      return "KEY_AwardDeadlyAccuracyLastRewardDate";   
   if(keyId == KEY_AwardRemembrance)
      return "KEY_AwardRemembrance";   
   if(keyId == KEY_AwardRemembranceLastRewardDate)
      return "KEY_AwardRemembranceLastRewardDate";   
   if(keyId == KEY_AwardAvenger)
      return "KEY_AwardAvenger";   
   if(keyId == KEY_AwardAvengerLastRewardDate)
      return "KEY_AwardAvengerLastRewardDate";   
   if(keyId == KEY_AwardCherub)
      return "KEY_AwardCherub";   
   if(keyId == KEY_AwardCherubLastRewardDate)
      return "KEY_AwardCherubLastRewardDate";   
   if(keyId == KEY_AwardDignity)
      return "KEY_AwardDignity";   
   if(keyId == KEY_AwardDignityLastRewardDate)
      return "KEY_AwardDignityLastRewardDate";   
   if(keyId == KEY_AwardStalkerFlair)
      return "KEY_AwardStalkerFlair";   
   if(keyId == KEY_AwardStalkerFlairLastRewardDate)
      return "KEY_AwardStalkerFlairLastRewardDate";   
   if(keyId == KEY_AwardLucky)
      return "KEY_AwardLucky";   
   if(keyId == KEY_AwardLuckyLastRewardDate)
      return "KEY_AwardLuckyLastRewardDate";   
   if(keyId == KEY_AwardBlackList)
      return "KEY_AwardBlackList";   
   if(keyId == KEY_AwardBlackListLastRewardDate)
      return "KEY_AwardBlackListLastRewardDate";   
   if(keyId == KEY_AwardSilentDeath)
      return "KEY_AwardSilentDeath";   
   if(keyId == KEY_AwardSilentDeathLastRewardDate)
      return "KEY_AwardSilentDeathLastRewardDate";   
   if(keyId == KEY_PlayerName)
      return "KEY_PlayerName";   
   
   return "";
}

int ATLAS_GET_STAT(char* statName)
{
   if(!statName)
      return 0;
   
   if(!strcmp("STAT_AwardAchillesHeel", statName))
      return STAT_AwardAchillesHeel;   
   if(!strcmp("STAT_AwardAchillesHeelLastRewardDate", statName))
      return STAT_AwardAchillesHeelLastRewardDate;   
   if(!strcmp("STAT_AwardAvenger", statName))
      return STAT_AwardAvenger;   
   if(!strcmp("STAT_AwardAvengerLastRewardDate", statName))
      return STAT_AwardAvengerLastRewardDate;   
   if(!strcmp("STAT_AwardBlackList", statName))
      return STAT_AwardBlackList;   
   if(!strcmp("STAT_AwardBlackListLastRewardDate", statName))
      return STAT_AwardBlackListLastRewardDate;   
   if(!strcmp("STAT_AwardBlitzkrieg", statName))
      return STAT_AwardBlitzkrieg;   
   if(!strcmp("STAT_AwardBlitzkriegLastRewardDate", statName))
      return STAT_AwardBlitzkriegLastRewardDate;   
   if(!strcmp("STAT_AwardCherub", statName))
      return STAT_AwardCherub;   
   if(!strcmp("STAT_AwardCherubLastRewardDate", statName))
      return STAT_AwardCherubLastRewardDate;   
   if(!strcmp("STAT_AwardClimber", statName))
      return STAT_AwardClimber;   
   if(!strcmp("STAT_AwardClimberLastRewardDate", statName))
      return STAT_AwardClimberLastRewardDate;   
   if(!strcmp("STAT_AwardDeadlyAccuracy", statName))
      return STAT_AwardDeadlyAccuracy;   
   if(!strcmp("STAT_AwardDeadlyAccuracyLastRewardDate", statName))
      return STAT_AwardDeadlyAccuracyLastRewardDate;   
   if(!strcmp("STAT_AwardDignity", statName))
      return STAT_AwardDignity;   
   if(!strcmp("STAT_AwardDignityLastRewardDate", statName))
      return STAT_AwardDignityLastRewardDate;   
   if(!strcmp("STAT_AwardDoubleShotDoubleKill", statName))
      return STAT_AwardDoubleShotDoubleKill;   
   if(!strcmp("STAT_AwardDoubleShotDoubleKillLastRewardDate", statName))
      return STAT_AwardDoubleShotDoubleKillLastRewardDate;   
   if(!strcmp("STAT_AwardDryVictory", statName))
      return STAT_AwardDryVictory;   
   if(!strcmp("STAT_AwardDryVictoryLastRewardDate", statName))
      return STAT_AwardDryVictoryLastRewardDate;   
   if(!strcmp("STAT_AwardFasterThanBullets", statName))
      return STAT_AwardFasterThanBullets;   
   if(!strcmp("STAT_AwardFasterThanBulletsLastRewardDate", statName))
      return STAT_AwardFasterThanBulletsLastRewardDate;   
   if(!strcmp("STAT_AwardHarvestTime", statName))
      return STAT_AwardHarvestTime;   
   if(!strcmp("STAT_AwardHarvestTimeLastRewardDate", statName))
      return STAT_AwardHarvestTimeLastRewardDate;   
   if(!strcmp("STAT_AwardInvincibleFury", statName))
      return STAT_AwardInvincibleFury;   
   if(!strcmp("STAT_AwardInvincibleFuryLastRewardDate", statName))
      return STAT_AwardInvincibleFuryLastRewardDate;   
   if(!strcmp("STAT_AwardLightingReflexes", statName))
      return STAT_AwardLightingReflexes;   
   if(!strcmp("STAT_AwardLightingReflexesLastRewardDate", statName))
      return STAT_AwardLightingReflexesLastRewardDate;   
   if(!strcmp("STAT_AwardLucky", statName))
      return STAT_AwardLucky;   
   if(!strcmp("STAT_AwardLuckyLastRewardDate", statName))
      return STAT_AwardLuckyLastRewardDate;   
   if(!strcmp("STAT_AwardMad", statName))
      return STAT_AwardMad;   
   if(!strcmp("STAT_AwardMadLastRewardDate", statName))
      return STAT_AwardMadLastRewardDate;   
   if(!strcmp("STAT_AwardMarksman", statName))
      return STAT_AwardMarksman;   
   if(!strcmp("STAT_AwardMarksmanLastRewardDate", statName))
      return STAT_AwardMarksmanLastRewardDate;   
   if(!strcmp("STAT_AwardMasscare", statName))
      return STAT_AwardMasscare;   
   if(!strcmp("STAT_AwardMasscareLastRewardDate", statName))
      return STAT_AwardMasscareLastRewardDate;   
   if(!strcmp("STAT_AwardMultichampion", statName))
      return STAT_AwardMultichampion;   
   if(!strcmp("STAT_AwardMultichampionLastRewardDate", statName))
      return STAT_AwardMultichampionLastRewardDate;   
   if(!strcmp("STAT_AwardOculist", statName))
      return STAT_AwardOculist;   
   if(!strcmp("STAT_AwardOculistLastRewardDate", statName))
      return STAT_AwardOculistLastRewardDate;   
   if(!strcmp("STAT_AwardOpener", statName))
      return STAT_AwardOpener;   
   if(!strcmp("STAT_AwardOpenerLastRewardDate", statName))
      return STAT_AwardOpenerLastRewardDate;   
   if(!strcmp("STAT_AwardOwerwhelmingSuperiority", statName))
      return STAT_AwardOwerwhelmingSuperiority;   
   if(!strcmp("STAT_AwardOwerwhelmingSuperiorityLastRewardDate", statName))
      return STAT_AwardOwerwhelmingSuperiorityLastRewardDate;   
   if(!strcmp("STAT_AwardParanoia", statName))
      return STAT_AwardParanoia;   
   if(!strcmp("STAT_AwardParanoiaLastRewardDate", statName))
      return STAT_AwardParanoiaLastRewardDate;   
   if(!strcmp("STAT_AwardPeaceAmbassador", statName))
      return STAT_AwardPeaceAmbassador;   
   if(!strcmp("STAT_AwardPeaceAmbassadorLastRewardDate", statName))
      return STAT_AwardPeaceAmbassadorLastRewardDate;   
   if(!strcmp("STAT_AwardRemembrance", statName))
      return STAT_AwardRemembrance;   
   if(!strcmp("STAT_AwardRemembranceLastRewardDate", statName))
      return STAT_AwardRemembranceLastRewardDate;   
   if(!strcmp("STAT_AwardSilentDeath", statName))
      return STAT_AwardSilentDeath;   
   if(!strcmp("STAT_AwardSilentDeathLastRewardDate", statName))
      return STAT_AwardSilentDeathLastRewardDate;   
   if(!strcmp("STAT_AwardSkewer", statName))
      return STAT_AwardSkewer;   
   if(!strcmp("STAT_AwardSkewerLastRewardDate", statName))
      return STAT_AwardSkewerLastRewardDate;   
   if(!strcmp("STAT_AwardSprinterStopper", statName))
      return STAT_AwardSprinterStopper;   
   if(!strcmp("STAT_AwardSprinterStopperLastRewardDate", statName))
      return STAT_AwardSprinterStopperLastRewardDate;   
   if(!strcmp("STAT_AwardStalkerFlair", statName))
      return STAT_AwardStalkerFlair;   
   if(!strcmp("STAT_AwardStalkerFlairLastRewardDate", statName))
      return STAT_AwardStalkerFlairLastRewardDate;   
   if(!strcmp("STAT_AwardToughy", statName))
      return STAT_AwardToughy;   
   if(!strcmp("STAT_AwardToughyLastRewardDate", statName))
      return STAT_AwardToughyLastRewardDate;   
   if(!strcmp("STAT_BestScore_BackstabsKillsInRow", statName))
      return STAT_BestScore_BackstabsKillsInRow;   
   if(!strcmp("STAT_BestScore_BleedKillsInRow", statName))
      return STAT_BestScore_BleedKillsInRow;   
   if(!strcmp("STAT_BestScore_ExplosiveKillsInRow", statName))
      return STAT_BestScore_ExplosiveKillsInRow;   
   if(!strcmp("STAT_BestScore_EyeKillsInRow", statName))
      return STAT_BestScore_EyeKillsInRow;   
   if(!strcmp("STAT_BestScore_HeadshotsKillsInRow", statName))
      return STAT_BestScore_HeadshotsKillsInRow;   
   if(!strcmp("STAT_BestScore_KillsInRow", statName))
      return STAT_BestScore_KillsInRow;   
   if(!strcmp("STAT_BestScore_KnifeKillsInRow", statName))
      return STAT_BestScore_KnifeKillsInRow;   
   if(!strcmp("STAT_PlayerName", statName))
      return STAT_PlayerName;   
   
   return 0;
}
char* ATLAS_GET_STAT_NAME(int statId)
{
   if(statId <= 0)
      return "";
   
   if(statId == STAT_AwardAchillesHeel)
      return "STAT_AwardAchillesHeel";   
   if(statId == STAT_AwardAchillesHeelLastRewardDate)
      return "STAT_AwardAchillesHeelLastRewardDate";   
   if(statId == STAT_AwardAvenger)
      return "STAT_AwardAvenger";   
   if(statId == STAT_AwardAvengerLastRewardDate)
      return "STAT_AwardAvengerLastRewardDate";   
   if(statId == STAT_AwardBlackList)
      return "STAT_AwardBlackList";   
   if(statId == STAT_AwardBlackListLastRewardDate)
      return "STAT_AwardBlackListLastRewardDate";   
   if(statId == STAT_AwardBlitzkrieg)
      return "STAT_AwardBlitzkrieg";   
   if(statId == STAT_AwardBlitzkriegLastRewardDate)
      return "STAT_AwardBlitzkriegLastRewardDate";   
   if(statId == STAT_AwardCherub)
      return "STAT_AwardCherub";   
   if(statId == STAT_AwardCherubLastRewardDate)
      return "STAT_AwardCherubLastRewardDate";   
   if(statId == STAT_AwardClimber)
      return "STAT_AwardClimber";   
   if(statId == STAT_AwardClimberLastRewardDate)
      return "STAT_AwardClimberLastRewardDate";   
   if(statId == STAT_AwardDeadlyAccuracy)
      return "STAT_AwardDeadlyAccuracy";   
   if(statId == STAT_AwardDeadlyAccuracyLastRewardDate)
      return "STAT_AwardDeadlyAccuracyLastRewardDate";   
   if(statId == STAT_AwardDignity)
      return "STAT_AwardDignity";   
   if(statId == STAT_AwardDignityLastRewardDate)
      return "STAT_AwardDignityLastRewardDate";   
   if(statId == STAT_AwardDoubleShotDoubleKill)
      return "STAT_AwardDoubleShotDoubleKill";   
   if(statId == STAT_AwardDoubleShotDoubleKillLastRewardDate)
      return "STAT_AwardDoubleShotDoubleKillLastRewardDate";   
   if(statId == STAT_AwardDryVictory)
      return "STAT_AwardDryVictory";   
   if(statId == STAT_AwardDryVictoryLastRewardDate)
      return "STAT_AwardDryVictoryLastRewardDate";   
   if(statId == STAT_AwardFasterThanBullets)
      return "STAT_AwardFasterThanBullets";   
   if(statId == STAT_AwardFasterThanBulletsLastRewardDate)
      return "STAT_AwardFasterThanBulletsLastRewardDate";   
   if(statId == STAT_AwardHarvestTime)
      return "STAT_AwardHarvestTime";   
   if(statId == STAT_AwardHarvestTimeLastRewardDate)
      return "STAT_AwardHarvestTimeLastRewardDate";   
   if(statId == STAT_AwardInvincibleFury)
      return "STAT_AwardInvincibleFury";   
   if(statId == STAT_AwardInvincibleFuryLastRewardDate)
      return "STAT_AwardInvincibleFuryLastRewardDate";   
   if(statId == STAT_AwardLightingReflexes)
      return "STAT_AwardLightingReflexes";   
   if(statId == STAT_AwardLightingReflexesLastRewardDate)
      return "STAT_AwardLightingReflexesLastRewardDate";   
   if(statId == STAT_AwardLucky)
      return "STAT_AwardLucky";   
   if(statId == STAT_AwardLuckyLastRewardDate)
      return "STAT_AwardLuckyLastRewardDate";   
   if(statId == STAT_AwardMad)
      return "STAT_AwardMad";   
   if(statId == STAT_AwardMadLastRewardDate)
      return "STAT_AwardMadLastRewardDate";   
   if(statId == STAT_AwardMarksman)
      return "STAT_AwardMarksman";   
   if(statId == STAT_AwardMarksmanLastRewardDate)
      return "STAT_AwardMarksmanLastRewardDate";   
   if(statId == STAT_AwardMasscare)
      return "STAT_AwardMasscare";   
   if(statId == STAT_AwardMasscareLastRewardDate)
      return "STAT_AwardMasscareLastRewardDate";   
   if(statId == STAT_AwardMultichampion)
      return "STAT_AwardMultichampion";   
   if(statId == STAT_AwardMultichampionLastRewardDate)
      return "STAT_AwardMultichampionLastRewardDate";   
   if(statId == STAT_AwardOculist)
      return "STAT_AwardOculist";   
   if(statId == STAT_AwardOculistLastRewardDate)
      return "STAT_AwardOculistLastRewardDate";   
   if(statId == STAT_AwardOpener)
      return "STAT_AwardOpener";   
   if(statId == STAT_AwardOpenerLastRewardDate)
      return "STAT_AwardOpenerLastRewardDate";   
   if(statId == STAT_AwardOwerwhelmingSuperiority)
      return "STAT_AwardOwerwhelmingSuperiority";   
   if(statId == STAT_AwardOwerwhelmingSuperiorityLastRewardDate)
      return "STAT_AwardOwerwhelmingSuperiorityLastRewardDate";   
   if(statId == STAT_AwardParanoia)
      return "STAT_AwardParanoia";   
   if(statId == STAT_AwardParanoiaLastRewardDate)
      return "STAT_AwardParanoiaLastRewardDate";   
   if(statId == STAT_AwardPeaceAmbassador)
      return "STAT_AwardPeaceAmbassador";   
   if(statId == STAT_AwardPeaceAmbassadorLastRewardDate)
      return "STAT_AwardPeaceAmbassadorLastRewardDate";   
   if(statId == STAT_AwardRemembrance)
      return "STAT_AwardRemembrance";   
   if(statId == STAT_AwardRemembranceLastRewardDate)
      return "STAT_AwardRemembranceLastRewardDate";   
   if(statId == STAT_AwardSilentDeath)
      return "STAT_AwardSilentDeath";   
   if(statId == STAT_AwardSilentDeathLastRewardDate)
      return "STAT_AwardSilentDeathLastRewardDate";   
   if(statId == STAT_AwardSkewer)
      return "STAT_AwardSkewer";   
   if(statId == STAT_AwardSkewerLastRewardDate)
      return "STAT_AwardSkewerLastRewardDate";   
   if(statId == STAT_AwardSprinterStopper)
      return "STAT_AwardSprinterStopper";   
   if(statId == STAT_AwardSprinterStopperLastRewardDate)
      return "STAT_AwardSprinterStopperLastRewardDate";   
   if(statId == STAT_AwardStalkerFlair)
      return "STAT_AwardStalkerFlair";   
   if(statId == STAT_AwardStalkerFlairLastRewardDate)
      return "STAT_AwardStalkerFlairLastRewardDate";   
   if(statId == STAT_AwardToughy)
      return "STAT_AwardToughy";   
   if(statId == STAT_AwardToughyLastRewardDate)
      return "STAT_AwardToughyLastRewardDate";   
   if(statId == STAT_BestScore_BackstabsKillsInRow)
      return "STAT_BestScore_BackstabsKillsInRow";   
   if(statId == STAT_BestScore_BleedKillsInRow)
      return "STAT_BestScore_BleedKillsInRow";   
   if(statId == STAT_BestScore_ExplosiveKillsInRow)
      return "STAT_BestScore_ExplosiveKillsInRow";   
   if(statId == STAT_BestScore_EyeKillsInRow)
      return "STAT_BestScore_EyeKillsInRow";   
   if(statId == STAT_BestScore_HeadshotsKillsInRow)
      return "STAT_BestScore_HeadshotsKillsInRow";   
   if(statId == STAT_BestScore_KillsInRow)
      return "STAT_BestScore_KillsInRow";   
   if(statId == STAT_BestScore_KnifeKillsInRow)
      return "STAT_BestScore_KnifeKillsInRow";   
   if(statId == STAT_PlayerName)
      return "STAT_PlayerName";   
   
   return "";
}

int ATLAS_GET_STAT_PAGE_BY_ID(int statId)
{
   if(statId <= 0)
      return 0;
   

   //PlayerStats
   if(statId == 1 || statId == 2 || statId == 3 || statId == 4 || statId == 5 || statId == 6 || statId == 7 ||
      statId == 8 || statId == 9 || statId == 10 || statId == 11 || statId == 12 || statId == 13 || statId == 14 ||
      statId == 15 || statId == 16 || statId == 17 || statId == 18 || statId == 19 || statId == 20 || statId == 21 ||
      statId == 22 || statId == 23 || statId == 24 || statId == 25 || statId == 26 || statId == 27 || statId == 28 ||
      statId == 29 || statId == 30 || statId == 31 || statId == 32 || statId == 33 || statId == 34 || statId == 35 ||
      statId == 36 || statId == 37 || statId == 38 || statId == 39 || statId == 40 || statId == 41 || statId == 42 ||
      statId == 43 || statId == 44 || statId == 45 || statId == 46 || statId == 47 || statId == 48 || statId == 49 ||
      statId == 50 || statId == 51 || statId == 52 || statId == 53 || statId == 54 || statId == 55 || statId == 56 ||
      statId == 57 || statId == 58 || statId == 59 || statId == 60 || statId == 61 || statId == 62 || statId == 63 ||
      statId == 64 || statId == 65 || statId == 66 || statId == 67 || statId == 68)
      return 1;   
      
   
   return 0;
}

int ATLAS_GET_STAT_PAGE_BY_NAME(char* statName)
{
   if(!statName)
      return 0;
   

   //PlayerStats
   if(!strcmp("STAT_AwardAchillesHeel", statName) || !strcmp("STAT_AwardAchillesHeelLastRewardDate", statName) ||
      !strcmp("STAT_AwardAvenger", statName) || !strcmp("STAT_AwardAvengerLastRewardDate", statName) ||
      !strcmp("STAT_AwardBlackList", statName) || !strcmp("STAT_AwardBlackListLastRewardDate", statName) ||
      !strcmp("STAT_AwardBlitzkrieg", statName) || !strcmp("STAT_AwardBlitzkriegLastRewardDate", statName) ||
      !strcmp("STAT_AwardCherub", statName) || !strcmp("STAT_AwardCherubLastRewardDate", statName) ||
      !strcmp("STAT_AwardClimber", statName) || !strcmp("STAT_AwardClimberLastRewardDate", statName) ||
      !strcmp("STAT_AwardDeadlyAccuracy", statName) || !strcmp("STAT_AwardDeadlyAccuracyLastRewardDate", statName) ||
      !strcmp("STAT_AwardDignity", statName) || !strcmp("STAT_AwardDignityLastRewardDate", statName) ||
      !strcmp("STAT_AwardDoubleShotDoubleKill", statName) || !strcmp("STAT_AwardDoubleShotDoubleKillLastRewardDate", statName) ||
      !strcmp("STAT_AwardDryVictory", statName) || !strcmp("STAT_AwardDryVictoryLastRewardDate", statName) ||
      !strcmp("STAT_AwardFasterThanBullets", statName) || !strcmp("STAT_AwardFasterThanBulletsLastRewardDate", statName) ||
      !strcmp("STAT_AwardHarvestTime", statName) || !strcmp("STAT_AwardHarvestTimeLastRewardDate", statName) ||
      !strcmp("STAT_AwardInvincibleFury", statName) || !strcmp("STAT_AwardInvincibleFuryLastRewardDate", statName) ||
      !strcmp("STAT_AwardLightingReflexes", statName) || !strcmp("STAT_AwardLightingReflexesLastRewardDate", statName) ||
      !strcmp("STAT_AwardLucky", statName) || !strcmp("STAT_AwardLuckyLastRewardDate", statName) ||
      !strcmp("STAT_AwardMad", statName) || !strcmp("STAT_AwardMadLastRewardDate", statName) ||
      !strcmp("STAT_AwardMarksman", statName) || !strcmp("STAT_AwardMarksmanLastRewardDate", statName) ||
      !strcmp("STAT_AwardMasscare", statName) || !strcmp("STAT_AwardMasscareLastRewardDate", statName) ||
      !strcmp("STAT_AwardMultichampion", statName) || !strcmp("STAT_AwardMultichampionLastRewardDate", statName) ||
      !strcmp("STAT_AwardOculist", statName) || !strcmp("STAT_AwardOculistLastRewardDate", statName) ||
      !strcmp("STAT_AwardOpener", statName) || !strcmp("STAT_AwardOpenerLastRewardDate", statName) ||
      !strcmp("STAT_AwardOwerwhelmingSuperiority", statName) || !strcmp("STAT_AwardOwerwhelmingSuperiorityLastRewardDate", statName) ||
      !strcmp("STAT_AwardParanoia", statName) || !strcmp("STAT_AwardParanoiaLastRewardDate", statName) ||
      !strcmp("STAT_AwardPeaceAmbassador", statName) || !strcmp("STAT_AwardPeaceAmbassadorLastRewardDate", statName) ||
      !strcmp("STAT_AwardRemembrance", statName) || !strcmp("STAT_AwardRemembranceLastRewardDate", statName) ||
      !strcmp("STAT_AwardSilentDeath", statName) || !strcmp("STAT_AwardSilentDeathLastRewardDate", statName) ||
      !strcmp("STAT_AwardSkewer", statName) || !strcmp("STAT_AwardSkewerLastRewardDate", statName) ||
      !strcmp("STAT_AwardSprinterStopper", statName) || !strcmp("STAT_AwardSprinterStopperLastRewardDate", statName) ||
      !strcmp("STAT_AwardStalkerFlair", statName) || !strcmp("STAT_AwardStalkerFlairLastRewardDate", statName) ||
      !strcmp("STAT_AwardToughy", statName) || !strcmp("STAT_AwardToughyLastRewardDate", statName) ||
      !strcmp("STAT_BestScore_BackstabsKillsInRow", statName) || !strcmp("STAT_BestScore_BleedKillsInRow", statName) ||
      !strcmp("STAT_BestScore_ExplosiveKillsInRow", statName) || !strcmp("STAT_BestScore_EyeKillsInRow", statName) ||
      !strcmp("STAT_BestScore_HeadshotsKillsInRow", statName) || !strcmp("STAT_BestScore_KillsInRow", statName) ||
      !strcmp("STAT_BestScore_KnifeKillsInRow", statName) || !strcmp("STAT_PlayerName", statName))
      return 1;   
      
   
   return 0;
}

