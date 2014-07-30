/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <strings.h>

void bzero(void *ptr, size_t size)
{
  unsigned long i;
  unsigned char *p = ptr;
  for(i = 0; i < size; ++i) p[i] = 0;
}

