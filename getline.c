/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdio.h>
#include <errno.h>

ssize_t getline(char **lineptr __attribute__((unused)),
                size_t *n __attribute__ ((unused)),
                FILE *stream __attribute__ ((unused)))
{
  printf("getline\n");
  errno = ENOSYS;
  return (-1);
}
