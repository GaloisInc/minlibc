/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_STDINT_H
#define MINLIBC_STDINT_H

typedef signed         char int8_t;
typedef unsigned       char uint8_t;
typedef signed   short int  int16_t;
typedef unsigned short int  uint16_t;
typedef signed         int  int32_t;
typedef unsigned       int  uint32_t;

#ifdef __x86_64__
typedef signed         long int64_t;
typedef unsigned       long uint64_t;
typedef signed         long intptr_t;
typedef unsigned       long uintptr_t;
#else
typedef signed   long  long int64_t;
typedef unsigned long  long uint64_t;
typedef signed         int  intptr_t;
typedef unsigned       int  uintptr_t;
#endif

#endif
