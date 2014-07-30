/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/epoll.h>
#include <errno.h>

int epoll_ctl(int epfd __attribute__((unused)),
              int op __attribute__((unused)),
              int fd __attribute__((unused)),
              struct epoll_event *event __attribute__((unused)))
{
  errno = EINVAL;
  return -1;
}
