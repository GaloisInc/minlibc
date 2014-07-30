/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/stat.h>
#include <stdio.h>
#include <errno.h>

int mkfifo(const char *pathname __attribute__ ((unused)),
    mode_t mode __attribute__ ((unused)))
{
  printf("mkfifo\n");
  errno = ENOENT;
  return -1;
}

