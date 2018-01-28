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
#define MUNUSED
#else
#define MUNUSED __attribute((unused))
#endif /* URANDOM */

int fstat(int fd           MUNUSED,
          struct stat *buf MUNUSED)
{
#ifdef URANDOM
  if(fd == URANDOM_FD)
    return urandom_stat(buf, 1);
#endif

  errno = EBADF;
  return -1;
}
