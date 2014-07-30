/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

off_t lseek(int fildes __attribute__ ((unused)),
            off_t offset __attribute__ ((unused)),
            int whence __attribute__ ((unused)))
{
  printf("lseek\n");
  errno = EBADF;
  return -1;
}

