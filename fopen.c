/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdio.h>
#include <errno.h>

FILE *fopen(const char *path __attribute__((unused)),
            const char *mode __attribute__((unused)))
{
  printf("fopen\n");
  errno = EACCES;
  return 0;
}
