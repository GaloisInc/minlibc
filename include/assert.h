/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_ASSERT_H
#define MINLIBC_ASSERT_H

#include <stdio.h>

#define assert(x) ((!(x)) ? pabort("Assertion failed at %s:%d\n", __FILE__, __LINE__) : 0)

#endif
