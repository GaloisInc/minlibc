/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef __EMMINTRIN_H

#ifndef __SSE2__
#error "SSE2 not supported, consider using flag -msse2"
#endif

#include <xmmintrin.h>

// Typedefs borrowed from clang.  Appears legitimate for GCC.

// External interface
typedef double __m128d __attribute__((__vector_size__(16)));
typedef long long __m128i __attribute__((__vector_size__(16)));

/* Type defines.  */
// Internal interface
typedef double v2df __attribute__ ((__vector_size__ (16)));
typedef long long v2di __attribute__ ((__vector_size__ (16)));
typedef short v8hi __attribute__((__vector_size__(16)));
typedef char v16qi __attribute__((__vector_size__(16)));

extern inline __m128i _mm_andnot_si128(__m128i a, __m128i b)
{
    return (__m128i)__builtin_ia32_pandn128((v2di)a,(v2di)b);
}

extern inline __m128i _mm_and_si128(__m128i a, __m128i b)
{
    return (__m128i)__builtin_ia32_pand128((v2di)a,(v2di)b);
}

extern inline __m128i _mm_or_si128(__m128i a, __m128i b)
{
    return (__m128i)__builtin_ia32_por128((v2di)a,(v2di)b);
}

extern inline __m128i _mm_xor_si128(__m128i a, __m128i b)
{
    return (__m128i)__builtin_ia32_pxor128((v2di)a,(v2di)b);
}

extern inline __m128i _mm_shuffle_epi32(__m128i a, int imm)
{
    return (__m128i)__builtin_ia32_pshufd((v4si)a,imm);
}

extern inline __m128i _mm_load_si128(__m128i const *a)
{
    return *a;
    // What? Missing builtin.  It appears this is handled by gcc code gen magically...
    // return (__m128i)__builtin_ia32_loaddqa((const char *)p);
}

extern inline __m128i _mm_loadu_si128(__m128i const *a)
{
    return (__m128i)__builtin_ia32_loaddqu((const char *)a);
}

extern inline void _mm_store_si128(__m128i *p, __m128i b)
{
    *p = b;
    // Again...
    // __builtin_ia32_storedqa((char *)p, (v16qi)b);
}

extern inline void _mm_storeu_si128(__m128i *p, __m128i b)
{
    __builtin_ia32_storedqu((char *)p, (v16qi)b);
}

extern inline __m128i _mm_slli_si128(__m128i key, int imm)
{
    return (__m128i)__builtin_ia32_pslldqi128((v2di)key , imm*8);
}

extern inline __m128i _mm_set_epi32(int i3, int i2, int i1, int i0)
{
    // Code from clang, assuming it is equally performant for gcc
    return (__m128i)(v4si){ i0, i1, i2, i3};
}

extern inline __m128i _mm_setr_epi8(char b15, char b14, char b13, char b12, char b11
                            ,char b10, char  b9, char  b8, char  b7, char  b6
                            ,char  b5, char  b4, char  b3, char  b2, char  b1
                            ,char  b0)
{
    // Code from clang, assuming it is equally performant for gcc
    return (__m128i)(v16qi){ b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15 };
}

extern inline __m128i _mm_add_epi64(__m128i a, __m128i b)
{
    return (__m128i)__builtin_ia32_paddq128((v2di)a, (v2di)b);
}


#endif /* __EMMINTRIN_H */
