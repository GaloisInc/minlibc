/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_SYS_WAIT_H
#define MINLIBC_SYS_WAIT_H

#include <sys/types.h>

pid_t waitpid(pid_t pid, int *stat_loc, int options);

#endif
