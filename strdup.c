/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <string.h>
#include <stdlib.h>

char *strdup(const char *s)
{
  size_t bufsize = strlen(s) + 1;
  char *retval = malloc(bufsize);
  if(retval) memcpy(retval, s, bufsize);
  return retval;
}

