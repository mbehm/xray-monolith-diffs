/* lzo_mchw.ch -- matching functions using a window

   This file is part of the LZO real-time data compression library.

   Copyright (C) 2005 Markus Franz Xaver Johannes Oberhumer
   Copyright (C) 2004 Markus Franz Xaver Johannes Oberhumer
   Copyright (C) 2003 Markus Franz Xaver Johannes Oberhumer
   Copyright (C) 2002 Markus Franz Xaver Johannes Oberhumer
   Copyright (C) 2001 Markus Franz Xaver Johannes Oberhumer
   Copyright (C) 2000 Markus Franz Xaver Johannes Oberhumer
   Copyright (C) 1999 Markus Franz Xaver Johannes Oberhumer
   Copyright (C) 1998 Markus Franz Xaver Johannes Oberhumer
   Copyright (C) 1997 Markus Franz Xaver Johannes Oberhumer
   Copyright (C) 1996 Markus Franz Xaver Johannes Oberhumer
   All Rights Reserved.

   The LZO library is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License,
   version 2, as published by the Free Software Foundation.

   The LZO library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with the LZO library; see the file COPYING.
   If not, write to the Free Software Foundation, Inc.,
   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.

   Markus F.X.J. Oberhumer
   <markus@oberhumer.com>
   http://www.oberhumer.com/opensource/lzo/
 */


/***********************************************************************
//
************************************************************************/

typedef struct
{
    int init;

    lzo_uint look;          /* bytes in lookahead buffer */

    lzo_uint m_len;
    lzo_uint m_off;

    lzo_uint last_m_len;
    lzo_uint last_m_off;

    const lzo_bytep bp;
    const lzo_bytep ip;
    const lzo_bytep in;
    const lzo_bytep in_end;
    lzo_bytep out;

    lzo_callback_p cb;

    lzo_uint textsize;      /* text size counter */
    lzo_uint codesize;      /* code size counter */
    lzo_uint printcount;    /* counter for reporting progress every 1K bytes */

    /* some stats */
    unsigned long lit_bytes;
    unsigned long match_bytes;
    unsigned long rep_bytes;
    unsigned long lazy;

#if defined(LZO1B)
    lzo_uint r1_m_len;

    /* some stats */
    unsigned long r1_r, m3_r, m2_m, m3_m;
#endif

#if defined(LZO1C)
    lzo_uint r1_m_len;
    lzo_bytep m3;

    /* some stats */
    unsigned long r1_r, m3_r, m2_m, m3_m;
#endif

#if defined(LZO1F)
    lzo_uint r1_lit;
    lzo_uint r1_m_len;

    /* some stats */
    unsigned long r1_r, m2_m, m3_m;
#endif

#if defined(LZO1X) || defined(LZO1Y) || defined(LZO1Z)
    lzo_uint r1_lit;
    lzo_uint r1_m_len;

    /* some stats */
    unsigned long m1a_m, m1b_m, m2_m, m3_m, m4_m;
    unsigned long lit1_r, lit2_r, lit3_r;
#endif

#if defined(LZO2A)
    /* some stats */
    unsigned long m1, m2, m3, m4;
#endif
}
LZO_COMPRESS_T;


#if (LZO_CC_BORLANDC && LZO_ARCH_I086) && (__BORLANDC__ < 0x0450)
   /* work around a Borland C 3.1 bug */
#  define getbyte(c)  ((c).ip < (c).in_end ? (c).ip +=1, (c).ip[-1] : (-1))
#elif defined(__TURBOC__) && defined(__TOS__)
   /* work around a bug in Turbo C / Pure C (Atari ST) */
#  define getbyte(c)  ((c).ip < (c).in_end ? (int)(unsigned) *((c).ip)++ : (-1))
#else
#  define getbyte(c)  ((c).ip < (c).in_end ? *((c).ip)++ : (-1))
#endif

#include "rt_lzo_swd.ch"


/***********************************************************************
//
************************************************************************/

static int
init_match ( LZO_COMPRESS_T *c, lzo_swd_p s,
             const lzo_bytep dict, lzo_uint dict_len,
             lzo_uint32 flags )
{
    int r;

    assert(!c->init);
    c->init = 1;

    s->c = c;

    c->last_m_len = c->last_m_off = 0;

    c->textsize = c->codesize = c->printcount = 0;
    c->lit_bytes = c->match_bytes = c->rep_bytes = 0;
    c->lazy = 0;

    r = swd_init(s,dict,dict_len);
    if (r != 0)
        return r;

    s->use_best_off = (flags & 1) ? 1 : 0;
    return r;
}


/***********************************************************************
//
************************************************************************/

static int
find_match ( LZO_COMPRESS_T *c, lzo_swd_p s,
             lzo_uint this_len, lzo_uint skip )
{
    assert(c->init);

    if (skip > 0)
    {
        assert(this_len >= skip);
        swd_accept(s, this_len - skip);
        c->textsize += this_len - skip + 1;
    }
    else
    {
        assert(this_len <= 1);
        c->textsize += this_len - skip;
    }

    s->m_len = 1;
    s->m_len = THRESHOLD;
#ifdef SWD_BEST_OFF
    if (s->use_best_off)
        lzo_memset(s->best_pos,0,sizeof(s->best_pos));
#endif
    swd_findbest(s);
    c->m_len = s->m_len;
    c->m_off = s->m_off;

    swd_getbyte(s);

    if (s->b_char < 0)
    {
        c->look = 0;
        c->m_len = 0;
        swd_exit(s);
    }
    else
    {
        c->look = s->look + 1;
    }
    c->bp = c->ip - c->look;

#if 0
    /* brute force match search */
    if (c->m_len > THRESHOLD && c->m_len + 1 <= c->look)
    {
        const lzo_bytep ip = c->bp;
        const lzo_bytep m  = c->bp - c->m_off;
        const lzo_bytep in = c->in;

        if (ip - in > N)
            in = ip - N;
        for (;;)
        {
            while (*in != *ip)
                in++;
            if (in == ip)
                break;
            if (in != m)
                if (lzo_memcmp(in,ip,c->m_len+1) == 0)
                    printf("%p %p %p %5d\n",in,ip,m,c->m_len);
            in++;
        }
    }
#endif

    if (c->cb && c->cb->nprogress && c->textsize > c->printcount)
    {
        (*c->cb->nprogress)(c->cb, c->textsize, c->codesize, 0);
        c->printcount += 1024;
    }

    return LZO_E_OK;
}


/*
vi:ts=4:et
*/

