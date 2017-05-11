/* 
 * Copyright (C) 2017, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdarg.h>

int vprintf(const char *format, va_list ap)
{
  return vfprintf(stdout, format, ap);
}
