/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/eventfd.h>
#include <stdio.h>
#include <errno.h>

int eventfd(unsigned int initval __attribute__((unused)),
            int flags __attribute__((unused)))
{
  printf("eventfd\n");
  errno = EINVAL;
  return -1;
}

