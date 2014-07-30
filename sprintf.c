/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdarg.h>
#include <stdio.h>
#include <errno.h>

int sprintf(char * buf, const char *fmt, ...)
{
  va_list args;
  int i;

  va_start(args, fmt);
  i = vsnprintf(buf, 0xFFFFFFFFUL, fmt, args);
  va_end(args);
  return i;
}
