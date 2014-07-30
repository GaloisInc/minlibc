/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdio.h>
#include <errno.h>

int fclose(FILE *fp __attribute__((unused)))
{
  printf("fclose\n");
  errno = EBADF;
  return EOF;
}
