/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_SYS_VFS_H
#define MINLIBC_SYS_VFS_H

struct statfs {};

int statfs(const char *path, struct statfs *buf);

#endif
