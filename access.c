/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int access(const char *pathname __attribute__ ((unused)),
           int mode __attribute__ ((unused)))
{
  printf("access\n");
  errno = ENOENT;
  return (-1);
}
