/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_EPOLL_H
#define MINLIBC_EPOLL_H

#include <stdint.h>
#include <stdlib.h>

typedef union epoll_data {
  void     *ptr;
  int       fd;
  uint32_t  u32;
  uint64_t  u64;
} epoll_data_t;

struct epoll_event {
  uint32_t     events;
  epoll_data_t data;
};

#define EPOLL_CTL_ADD     1
#define EPOLL_CTL_DEL     2
#define EPOLL_CTL_MOD     3

#define EPOLLIN           0x1
#define EPOLLOUT          0x4
#define EPOLLERR          0x8
#define EPOLLHUP          0x10
#define EPOLLONESHOT      (1u << 30)

int epoll_create(int size);
int epoll_ctl(int, int, int, struct epoll_event *);
int epoll_wait(int, struct epoll_event *, int, int);

#endif
