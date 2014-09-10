/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_STRINGS_H
#define  MINLIBC_STRINGS_H

#include <sys/types.h>

void bzero(void *s, size_t n);
int strcasecmp(const char *s1, const char *s2);

#endif
