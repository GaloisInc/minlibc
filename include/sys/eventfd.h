/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_SYS_EVENTFD_H
#define MINLIBC_SYS_EVENTFD_H

typedef unsigned long long eventfd_t;

int eventfd(unsigned int initval, int flags);
int eventfd_write(int, eventfd_t val);

#endif
