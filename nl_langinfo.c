/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <langinfo.h>

char *nl_langinfo(nl_item item __attribute__((unused)))
{
  return "UTF8";
}
