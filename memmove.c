/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <string.h>

void  *memmove(void *dest, const void *src, size_t n)
{
  void *d0 = dest;
  char *d = (char *) dest;
  char *s = (char *) src;
  if (s < d)
    for (s += n, d += n; 0 != n; --n)
      *--d = *--s;
  else if (s != d)
    for (; 0 != n; --n)
      *d++ = *s++;
  return d0;
}

