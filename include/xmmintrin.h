/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef _XMMINTRIN_H
#define _XMMINTRIN_H

/* User API types */
typedef float __m128 __attribute__((__vector_size__(16)));

/* Internal interface */
typedef int v4si __attribute__((__vector_size__(16)));
typedef float v4sf __attribute__((__vector_size__(16)));


#endif /* _XMMINTRIN_H */
