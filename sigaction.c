/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <signal.h>
#include <errno.h>

int sigaction(int signum __attribute__((unused)),
	      const struct sigaction *act __attribute__((unused)),
	      struct sigaction *oldact __attribute__((unused)))
{
  errno = ENOSYS;
  return -1;
}
