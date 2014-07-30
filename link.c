/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int link(const char *path1 __attribute__((unused)),
         const char *path2 __attribute__((unused)))
{
  printf("link\n");
  errno = ENOENT;
  return -1;
}
