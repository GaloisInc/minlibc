/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <stdio.h>
#include <errno.h>

size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)
{
  size_t size_in_chars = size * nmemb, i;

  for(i = 0; i < size_in_chars; i++)
    if(fputc(*(char*)((unsigned long)ptr + i), stream) == EOF)
      return i / size;

  return nmemb;
}
