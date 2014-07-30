/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <iconv.h>

int iconv_close(iconv_t cd __attribute__((unused)))
{
  return 0;
}
