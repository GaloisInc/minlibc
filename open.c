/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>

#ifdef URANDOM
#include <runtime_reqs.h>
#include <string.h>
#define MUNUSED
#else
#define MUNUSED __attribute((unused))
#endif /* URANDOM */

int open(const char *pathname MUNUSED,
         int flags            MUNUSED,
         ...)
{
  printf("open\n");

#ifdef URANDOM
  if(strncmp(pathname, "/dev/urandom", 13) == 0 && (flags & ~O_NONBLOCK) == O_RDONLY)
    return urandom_open();
#endif

  errno = EACCES;
  return -1;
}
