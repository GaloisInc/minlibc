/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_RUNTIME_REQS
#define MINLIBC_RUNTIME_REQS

#include <sys/types.h>
#include <sys/resource.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>

void    runtime_write(size_t len, char *buffer);
void    runtime_block(unsigned long milliseconds);
void    runtime_exit(void) __attribute__((noreturn));
void   *runtime_alloc(void *start, size_t length, int prot);
void   *runtime_realloc(void *start, int canmove, size_t oldlen, size_t newlen);
void    runtime_free(void *start, size_t length);
int     runtime_memprotect(void *addr, size_t length, int prot);
int     runtime_pagesize(void);
time_t  runtime_time(void);
int     runtime_gettimeofday(struct timeval *);
int     runtime_rusage(int who, struct rusage *);

#ifdef URANDOM
#define URANDOM_FD 9001
int     urandom_open(void);
int     urandom_stat(struct stat *buf, int check_consumers);
ssize_t urandom_read(uint8_t *buf, size_t len);
int     urandom_close(void);
#endif

#ifdef PROFILING
FILE   *profile_fopen(const char *fname, const char *mode);
void    profile_flush(FILE *pfile);
void    profile_write(FILE *pfile, void *buffer, int amt);
void    profile_fclose(FILE *pfile);
#endif

#endif
