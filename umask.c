/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/stat.h>
#include <stdio.h>
#include <errno.h>

mode_t umask(mode_t cmask)
{
  static mode_t mask = 0;
  int retval = mask;
  printf("umask\n");
  mask = cmask;
  return retval;
}
