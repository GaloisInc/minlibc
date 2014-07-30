/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/stat.h>
#include <stdio.h>
#include <errno.h>

int chmod(const char *path __attribute__((unused)),
    mode_t mode __attribute__((unused)))
{
  printf("chmod\n");
  errno = ENOSYS;
  return (-1);
}
