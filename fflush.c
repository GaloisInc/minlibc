/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdio.h>
#include <errno.h>

int fflush(FILE *stream)
{
  if((stream == stdin) || (stream == stdout) || (stream == stderr)) {
    return 0;
  } else {
    errno = EBADF;
    return EOF;
  }
}
