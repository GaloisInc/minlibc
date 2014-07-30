/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <utime.h>
#include <stdio.h>
#include <errno.h>

int utime(const char *path __attribute__((unused)),
          const struct utimbuf *times __attribute__((unused)))
{
  printf("utime\n");
  errno = ENOENT;
  return -1;
}

