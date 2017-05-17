/* 
 * Copyright (C) 2017, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdio.h>

void __attribute__((noreturn)) __stack_chk_fail(void)
{
  printf("Stack smashing detected!\n");
  exit(-2357);
}
