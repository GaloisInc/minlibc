/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdio.h>
#include <errno.h>

int fputs(const char *s, FILE *stream)
{
  if((stream == stdin) || (stream == stdout) || (stream == stderr)) {
    return puts(s);
  } else {
    errno = EBADF;
    return EOF;
  }
}
