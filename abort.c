/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <runtime_reqs.h>
#include <stdlib.h>
#include <stdio.h>

void abort(void)
{
  printf("Abort called!\n");
  runtime_exit();
}
