/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdio.h>
#include <stdarg.h>
#include <runtime_reqs.h>

void pabort(const char *format, ...)
{
  va_list args;

  va_start(args, format);
  printf("ABORT: ");
  vfprintf(stderr, format, args);
  va_end(args);
  runtime_exit();
}
