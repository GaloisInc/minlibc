/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <string.h>
#include <stdlib.h>

char *strchr(const char *s, int c)
{
  const char *cur;
  for (cur = s; *cur; cur++) {
    if (*cur == c) {
      return ((char*)cur);
    }
  }

  return NULL;
}
