/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_SYS_SELECT_H
#define MINLIBC_SYS_SELECT_H

#include <time.h>

typedef struct {} fd_set;

int select(int nfds, fd_set *readfds, fd_set *writefds,
              fd_set *exceptfds, struct timeval *timeout);

#define FD_SET(x,y) /* */
#define FD_ZERO(x) /* */
#define FD_SETSIZE 1024

#endif
