/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#include <iconv.h>

/* GHC apparantly can't get along without iconv. So this is the world's */
/* most unimpressive implementation of it. There is only one iconv_t    */
/* return value (0xacce55ed), and it always translates things exactly   */
/* byte for byte, no matter what you do.                                */
iconv_t iconv_open(const char *tocode __attribute__((unused)),
                   const char *fromcode __attribute__((unused)))
{
  return (iconv_t)0xacce55ed;
}
