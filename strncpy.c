/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <string.h>

char  *strncpy(char *dest, const char *src, size_t count)
{
  char *tmp = dest;
  while (count-- && (*dest++ = *src++) != '\0')
    /* nothing */;
  return tmp;
}

