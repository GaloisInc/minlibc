/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_LIMITS_H
#define MINLIBC_LIMITS_H

#define SCHAR_MAX       127
#define SHRT_MAX        32767
#define USHRT_MAX       65535
#define INT_MAX         2147483647
#define UINT_MAX        4294967295U

#ifdef __x86_64__
# define LONG_MAX       9223372036854775807L
# define ULONG_MAX      18446744073709551615UL
#else
# define LONG_MAX       2147483647L
# define ULONG_MAX      4294967295UL
#endif
# define LONG_MIN       (-LONG_MAX - 1L)

#endif
