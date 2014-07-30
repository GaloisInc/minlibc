/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <termios.h>
#include <stdio.h>
#include <errno.h>

int tcgetattr(int fd __attribute__((unused)),
              struct termios *termios_p __attribute__((unused)))
{
  printf("tcgetattr\n");
  errno = ENOSYS;
  return -1;
}
