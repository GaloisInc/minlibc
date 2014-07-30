/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <runtime_reqs.h>

int puts(const char *s)
{
  int len = strlen(s);
  runtime_write(len, (char*)s);
  runtime_write(1,"\n");
  return 0;
}

