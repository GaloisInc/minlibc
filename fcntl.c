/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <fcntl.h>
#include <errno.h>

int fcntl(int fd __attribute__((unused)),
          int cmd __attribute__((unused)),
          ...)
{
  errno = EACCES;
  return -1;
}
