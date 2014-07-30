/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

ssize_t read(int fildes __attribute__((unused)),
             void *buf __attribute__((unused)),
             size_t nbyte __attribute__((unused)))
{
  printf("read\n");
  errno = EBADF;
  return -1;
}

