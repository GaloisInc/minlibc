/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <runtime_reqs.h>

ssize_t write(int filedes, const void *buf, size_t nbyte)
{
  printf("write\n");
  if(filedes == 0 || filedes > 2) {
    errno = EBADF;
    return -1;
  }
  runtime_write(nbyte, (char*)buf);
  return nbyte;
}

