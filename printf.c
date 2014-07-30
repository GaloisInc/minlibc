/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdio.h>
#include <stdarg.h>

int printf(const char *format, ...)
{
  va_list args;
  int res;

  va_start(args, format);
  res = vfprintf(stdout, format, args);
  va_end(args);
  return res;
}

