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

#define INT8_MIN    (-0x7f - 1)
#define INT16_MIN   (-0x7fff - 1)
#define INT32_MIN   (-0x7fffffff - 1)
#define INT64_MIN   (-0x7fffffffffffffffLL - 1)

#define INT8_MAX    0x7f
#define INT16_MAX   0x7fff
#define INT32_MAX   0x7fffffff
#define INT64_MAX   0x7fffffffffffffffLL

#define UINT8_MAX   0xff
#define UINT16_MAX  0xffff
#define UINT32_MAX  0xffffffffU
#define UINT64_MAX  0xffffffffffffffffULL

#endif
