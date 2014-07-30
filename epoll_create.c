/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/epoll.h>
#include <stdio.h>
#include <errno.h>

int epoll_create(int size __attribute__((unused)))
{
  printf("epoll_create\n");
  errno = ENOMEM;
  return -1;
}
