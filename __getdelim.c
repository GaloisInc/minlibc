/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/types.h>
#include <stdio.h>
#include <errno.h>

size_t __getdelim(char **, size_t *, int, FILE *);

size_t __getdelim(char **lineptr __attribute__ ((unused)),
                  size_t *n __attribute__ ((unused)),
                  int delim __attribute__ ((unused)),
                  FILE *stream __attribute__ ((unused)))
{
  printf("__getdelim\n");
  errno = ENOSYS;
  return (-1);
}
