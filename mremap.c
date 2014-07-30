/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <runtime_reqs.h>
#include <sys/mman.h>

void *mremap(void *old_address, size_t old_size, size_t new_size, int flags)
{
  return runtime_realloc(old_address, flags, old_size, new_size);
}
