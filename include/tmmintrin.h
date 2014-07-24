
#ifndef _TMMINTRIN_H
#define _TMMINTRIN_H

#ifndef __SSSE3__
#error "Evidently you want SSSE3... consider -mssse3"
#endif

extern inline __m128i _mm_shuffle_epi8(__m128i a, __m128i b)
{
    return (__m128i)__builtin_ia32_pshufb128((v16qi)a, (v16qi)b);
}

#endif /* TMMINTRIN_H */
