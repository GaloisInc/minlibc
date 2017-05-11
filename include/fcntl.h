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

#define O_RDONLY      0x00000000
#define O_WRONLY      0x00000001
#define O_RDWR        0x00000002
#define O_NONBLOCK    0x00000004
#define O_APPEND      0x00000008
#define O_CREAT       0x00000200
#define O_TRUNC       0x00000400
#define O_EXCL        0x00000800

#define F_GETFL       3
#define F_SETFL       4

int open(const char *pathname, int flags, ...);
int fcntl(int fd, int cmd, ...);
int creat(const char *path, mode_t mode);

#endif
