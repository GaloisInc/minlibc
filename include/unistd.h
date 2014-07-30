/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_UNISTD_H
#define MINLIBC_UNISTD_H

#include <sys/types.h>

#define _SC_CLK_TCK         2
#define _SC_PAGESIZE        30

extern char **environ;

int     getpagesize(void);

off_t   lseek(int fd, off_t offset, int whence);
ssize_t read(int fd, void *buf, size_t count);
ssize_t write(int fd, const void *buf, size_t count);
int     close(int fd);
int     ftruncate(int fd, off_t length);
int     isatty(int fd);
int     dup(int fildes);
int     dup2(int fildes, int fildes2);
int     access(const char *pathname, int);

gid_t   getgid(void);
gid_t   getegid(void);
uid_t   getuid(void);
uid_t   geteuid(void);
pid_t   getpid(void);

long    sysconf(int name);
pid_t   fork(void);

int     pipe(int fildes[2]);
int     link(const char *path1, const char *path2);
int     unlink(const char *path);

#endif
