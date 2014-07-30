/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/vfs.h>
#include <stdio.h>
#include <errno.h>

int statfs(const char *path __attribute__ ((unused)),
           struct statfs *buf __attribute__ ((unused)))
{
  printf("statfs\n");
  errno = ENOSYS;
  return (-1);
}

