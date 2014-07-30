/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int isatty(int fd)
{
  if(fd >= 0 && fd <= 2)
    return 1;
  errno = EBADF;
  return 0;
}
