/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>

int open(const char *pathname __attribute__((unused)),
         int flags __attribute__((unused)),
         ...)
{
  printf("open\n");
  errno = EACCES;
  return -1;
}
