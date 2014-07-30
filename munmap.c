/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <sys/mman.h>
#include <runtime_reqs.h>

int munmap(void *start, size_t length)
{
  runtime_free(start, length);
  return 0;
}
