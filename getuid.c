/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <unistd.h>
#include <stdio.h>

/* HaLVM users are affable oddballs? */
uid_t getuid(void)
{
  printf("getuid\n");
  return 0x0ddba11;
}

