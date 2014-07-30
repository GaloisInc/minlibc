/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <string.h>
#include <stdlib.h>

char  *strrchr(const char *s, int c)
{
  char *retval = NULL;
  const char *cur;
  for(cur = s; *cur; cur++)
    if(*cur == c)
      retval = (char*)cur;
  return retval;
}

