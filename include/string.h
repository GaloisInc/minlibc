/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_STRING_H
#define MINLIBC_STRING_H

#include <sys/types.h>

size_t  strlen(const char *s);
size_t  strnlen(const char *s, size_t maxlen);
char   *strcpy(char *dest, const char *src);
char   *strncpy(char *dest, const char *src, size_t n);
int     strcmp(const char *s1, const char *s2);
char   *strdup(const char *s);
int     strncmp(const char *s1, const char *s2, size_t n);
char   *strrchr(const char *s, int c);
char   *strerror(int errnum);
char   *strstr(const char *, const char *);
char   *strchr(const char *, int c);

void   *memcpy(void *dest, const void *src, size_t n);
void   *memset(void *s, int c, size_t n);
void   *memmove(void *dest, const void *src, size_t n);
int     memcmp(const void *s1, const void *s2, size_t n);
void   *memchr(const void *s, int c, size_t n);

#endif
