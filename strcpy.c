/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdlib.h>
#include <string.h>

char *strcpy(char *dest, const char *src)
{
  char *retval = dest;
  // FIXME: Make higher-speed version?
  while(*src) *dest++ = *src++;
  return retval;
}

