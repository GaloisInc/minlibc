/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/eventfd.h>
#include <errno.h>
#include <stdio.h>

int eventfd_write(int fd __attribute__((unused)),
                  eventfd_t value __attribute__((unused)))
{
  printf("eventfd_write\n");
  errno = EINVAL;
  return -1;
}
