/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <signal.h>
#include <stdio.h>
#include <errno.h>

int sigemptyset(sigset_t *set __attribute__ ((unused)))
{
  printf("sigemptyset\n");
  errno = EINVAL;
  return -1;
}

