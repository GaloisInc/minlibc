/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_SYS_STAT_H
#define MINLIBC_SYS_STAT_H

#include <sys/types.h>
#include <time.h>

#define S_IFMT     0170000
#define S_IFSOCK   0140000
#define S_IFLNK    0120000
#define S_IFREG    0100000
#define S_IFBLK    0060000
#define S_IFDIR    0040000
#define S_IFCHR    0020000
#define S_IFIFO    0010000
#define S_ISUID    0004000
#define S_ISGID    0002000
#define S_ISVTX    0001000
#define S_IRWXU    00700
#define S_IRUSR    00400
#define S_IWUSR    00200
#define S_IXUSR    00100
#define S_IRWXG    00070
#define S_IRGRP    00040
#define S_IWGRP    00020
#define S_IXGRP    00010
#define S_IRWXO    00007
#define S_IROTH    00004
#define S_IWOTH    00002
#define S_IXOTH    00001

#define S_ISSOCK(x) (((x) & S_IFMT) == S_IFSOCK)
#define S_ISFIFO(x) (((x) & S_IFMT) == S_IFIFO)
#define S_ISDIR(x)  (((x) & S_IFMT) == S_IFDIR)
#define S_ISBLK(x)  (((x) & S_IFMT) == S_IFBLK)
#define S_ISCHR(x)  (((x) & S_IFMT) == S_IFCHR)
#define S_ISREG(x)  (((x) & S_IFMT) == S_IFREG)

typedef unsigned long int dev_t;
typedef unsigned      int nlink_t;
typedef unsigned      int blksize_t;
typedef unsigned      int blkcnt_t;

struct stat {
  dev_t     st_dev;
  ino_t     st_ino;
  mode_t    st_mode;
  nlink_t   st_nlink;
  uid_t     st_uid;
  gid_t     st_gid;
  dev_t     st_rdev;
  off_t     st_size;
  blksize_t st_blksize;
  blkcnt_t  st_blocks;
  time_t    st_atime;
  time_t    st_mtime;
  time_t    st_ctime;
};

int    stat(const char *p, struct stat *buf);
int    fstat(int fd, struct stat *buf);
int    lstat(const char *path, struct stat *buf);

int    mkdir(const char *p, mode_t mode);
int    mkfifo(const char *p, mode_t mode);
mode_t umask(mode_t cmask);
int    chmod(const char *p, mode_t mode);

#endif
