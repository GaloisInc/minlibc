/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdlib.h>
#include <stdio.h>
#include <runtime_reqs.h>

void exit(int status)
{
  printf("Exit called with %d\n", status);
  runtime_exit();
}
