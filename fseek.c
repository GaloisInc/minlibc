/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdio.h>
#include <errno.h>

int fseek(FILE *stream __attribute__((unused)),
          long offset  __attribute__((unused)),
          int whence   __attribute__((unused)))
{
  printf("fseek\n");
  errno = EBADF;
  return 0;
}

