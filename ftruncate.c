/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int ftruncate(int fd __attribute__ ((unused)),
              off_t length __attribute__ ((unused)))
{
  printf("ftruncate\n");
  errno = EPERM;
  return (-1);
}
