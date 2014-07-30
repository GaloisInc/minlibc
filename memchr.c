/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <string.h>
#include <stdlib.h>

void  *memchr(const void *s, int c, size_t n)
{
  size_t i;

  for(i = 0; i < n; i++)
    if(((unsigned char*)s)[i] == (unsigned char)c)
      return (void*)((unsigned long)s + i);

  return NULL;
}

