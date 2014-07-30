/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <string.h>
#include <stdlib.h>

char *strstr(const char *str1, const char *str2)
{
  size_t len_str2 = strlen(str2);
  char *cur;

  for (cur = (char*)str1; cur != NULL; cur = strchr(cur, *str2)) {
    if (!strncmp(cur, str2, len_str2)) {
      break;
    }
    cur++;
  }

  return cur;
}

