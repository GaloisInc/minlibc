/* 
 * Copyright (C) 2017, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <netdb.h>

int h_errno;

int *__h_errno_location()
{
  return &h_errno;
}
