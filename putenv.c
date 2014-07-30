/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

int putenv(char *str)
{
  printf("WARNING: putenv('%s')\n", str);
  return ENOMEM;
}
