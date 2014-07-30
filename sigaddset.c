/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <signal.h>
#include <stdio.h>
#include <errno.h>

int sigaddset(sigset_t *set __attribute__ ((unused)),
              int signum __attribute__ ((unused)))
{
  printf("sigaddset\n");
  errno = EINVAL;
  return -1;
}
