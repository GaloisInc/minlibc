/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/stat.h>
#include <errno.h>
#include <stdio.h>

int __xstat(int, const char *, struct stat*);

int __xstat(int ver __attribute__((unused)),
            const char *path __attribute__((unused)),
            struct stat *stat_buf __attribute__((unused)))
{
  printf("__xstat\n");
  errno = ENOENT;
  return -1;
}
