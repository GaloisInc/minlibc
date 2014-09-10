/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_BYTESWAP_H
#define MINLIBC_BYTESWAP_H

#include <endian.h>

/* glibc compatibility definitions */
#define bswap_16(x) __bswap_16(x)
#define bswap_32(x) __bswap_32(x)
#define bswap_64(x) __bswap_64(x)

#endif
