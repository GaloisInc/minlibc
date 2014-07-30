/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/stat.h>
#include <errno.h>

int lstat(const char *path __attribute__((unused)),
          struct stat *buf __attribute__((unused)))
{
  errno = ENOENT;
  return -1;
}
