/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <string.h>

int strncmp(const char *str1, const char *str2, size_t count) 
{
  register signed char __res = 0;

  while(count--) {
    if ((__res = *str1 - *str2) != 0 || !*str1++ || !*str2++)
      break;
  }
  return __res;
}

