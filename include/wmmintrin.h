/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef _WMMINTRIN_H
#define _WMMINTRIN_H

#include <emmintrin.h>

#ifdef __AES__
extern inline __m128i _mm_aesdec_si128(__m128i v, __m128i rkey)
{
    return (__m128i)__builtin_ia32_aesdec128((v2di)v, (v2di)rkey);
}

extern inline __m128i _mm_aesenc_si128(__m128i v, __m128i rkey)
{
    return (__m128i)__builtin_ia32_aesenc128((v2di)v, (v2di)rkey);
}

extern inline __m128i _mm_aesenclast_si128(__m128i v, __m128i rkey)
{
    return (__m128i)__builtin_ia32_aesenclast128((v2di)v, (v2di)rkey);
}

extern inline __m128i _mm_aesdeclast_si128(__m128i v, __m128i rkey)
{
    return (__m128i)__builtin_ia32_aesdeclast128((v2di)v, (v2di)rkey);
}

extern inline __m128i _mm_aeskeygenassist_si128(__m128i ckey, const int rcon)
{
    return (__m128i)__builtin_ia32_aeskeygenassist128((v2di)ckey, rcon);
}

extern inline __m128i _mm_aesimc_si128(__m128i v)
{
    return (__m128i)__builtin_ia32_aesimc128((v2di)v);
}
#endif /* AES */



#ifdef __PCLMUL__
extern inline __m128i _mm_clmulepi64_si128(__m128i v1, __m128i v2, const int imm8)
{
    return (__m128i)__builtin_ia32_pclmulqdq128((v2di)v1, (v2di)v2, (char)imm8);
}
#endif /* PCLMUL */

#endif
