/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <string.h>

void  *memset(void *s,int c, size_t count)
{
  char *xs = (char *) s;

  while (count--)
    *xs++ = c;

  return s;
}

