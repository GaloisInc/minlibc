/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

#ifdef URANDOM
#include <runtime_reqs.h>
#define MUNUSED
#else
#define MUNUSED __attribute((unused))
#endif /* URANDOM */

ssize_t read(int fildes   MUNUSED,
             void *buf    MUNUSED,
             size_t nbyte MUNUSED)
{
  printf("read\n");

#ifdef URANDOM
  if(fildes == URANDOM_FD)
    return urandom_read(buf, nbyte);
#endif

  errno = EBADF;
  return -1;
}

