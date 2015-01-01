/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdarg.h>
#include <stdio.h>
#include <errno.h>
#include <runtime_reqs.h>

int vfprintf(FILE *stream, const char *format, va_list ap)
{
  static char buf[4096];

  if((stream == stdin) || (stream == stdout) || (stream == stderr)) {
    int r = vsnprintf(buf, sizeof(buf), format, ap);
    runtime_write(r, buf);
    return r;
  }

#ifdef PROFILING
  if(stream) {
    int r = vsnprintf(buf, sizeof(buf), format, ap);
    profile_write(stream, buf, r);
    return r;
  }
#endif

  return -1;
}
