/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/wait.h>
#include <stdio.h>
#include <errno.h>

pid_t waitpid(pid_t pid __attribute__((unused)),
              int *stat_loc __attribute__((unused)),
              int options __attribute__((unused)))
{
  printf("waitpid\n");
  errno = ECHILD;
  return -1;
}
