/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/stat.h>
#include <errno.h>

#ifdef URANDOM
#include <runtime_reqs.h>
#include <string.h>
#define MUNUSED
#else
#define MUNUSED __attribute((unused))
#endif /* URANDOM */

int lstat(const char *path MUNUSED,
          struct stat *buf MUNUSED)
{
#ifdef URANDOM
  if(strncmp(path, "/dev/urandom", 13) == 0)
    return urandom_stat(buf, 0);
#endif

  return -1;
}
