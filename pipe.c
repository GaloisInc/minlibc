/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int pipe(int fildes[2] __attribute__((unused)))
{
  printf("pipe\n");
  errno = EMFILE;
  return -1;
}
