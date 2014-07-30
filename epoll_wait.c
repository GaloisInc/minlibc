/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/epoll.h>
#include <stdio.h>
#include <runtime_reqs.h>

int epoll_wait(int epfd __attribute__((unused)),
               struct epoll_event *events __attribute__((unused)),
               int maxevents __attribute__((unused)),
               int timeout)
{
  switch(timeout) {
    case -1:
      printf("epoll_wait with endless wait. aborting.\n");
      abort();
    case 0:
      return 0;
    default:
      runtime_block(timeout);
      return 0;
  }
}
