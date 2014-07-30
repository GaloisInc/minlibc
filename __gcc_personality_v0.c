/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdio.h>
#include <stdlib.h>

int __gcc_personality_v0(int v, ...) __attribute__((noreturn));

int __gcc_personality_v0(int v, ...)
{
  printf("You are in a very strange, bad place. (GCC personality %d)\n", v);
  abort();
}
