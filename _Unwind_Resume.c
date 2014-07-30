/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdio.h>
#include <stdlib.h>

void _Unwind_Resume(void *x) __attribute__((noreturn));

void _Unwind_Resume(void *x __attribute__((unused)))
{
  printf("Call to _Unwind_Resume ... how are you using pthreads?\n");
  abort();
}
