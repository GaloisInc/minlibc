/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_FCNTL_H
#define MINLIBC_FCNTL_H

#include <sys/types.h>

typedef signed long int off_t;

#define O_NONBLOCK    04000
#define O_RDONLY      0x23

#define F_GETFL       3
#define F_SETFL       4

int open(const char *pathname, int flags, ...);
int fcntl(int fd, int cmd, ...);
int creat(const char *path, mode_t mode);

#endif
