/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <signal.h>
#include <errno.h>
#include <stdio.h>

int kill(pid_t pid __attribute__((unused)),
    int sig __attribute__((unused)))
{
  printf("kill\n");
  errno = EPERM;
  return -1;
}
