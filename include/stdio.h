/* 
 * Copyright (C) 2014, Galois, Inc.
 * This sotware is distributed under a standard, three-clause BSD license.
 * Please see the file LICENSE, distributed with this software, for specific
 * terms and conditions.
 */
#ifndef MINLIBC_STDIO_H

#include <sys/types.h>

#define MINLIBC_STDIO_H

#ifndef NULL
#define NULL 0
#endif

#define BUFSIZ      8192
#define EOF         (-1)

#define SEEK_SET    0x1
#define SEEK_CUR    0x2
#define SEEK_END    0x3

typedef struct FILE FILE;
typedef unsigned int  pid_t;

extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;

FILE   *fopen(const char *path, const char *mode);
int     fputc(int c, FILE *stream);
int     fputs(const char *s, FILE *stream);
size_t  fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
size_t  fwrite(const void *, size_t, size_t, FILE *);
int     fflush(FILE *stream);
int     fseek(FILE *stream, long offset, int whence);
long    ftell(FILE *stream);
int     feof(FILE *stream);
int     fclose(FILE *fp);

int     getc(FILE *stream);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
int     putchar(int c);
int     puts(const char *s);

int     printf(const char *format, ...);
int     sprintf(char *str, const char *format, ...);
int     snprintf(char *str, size_t size, const char *format, ...);
int     fprintf(FILE *stream, const char *format, ...);

void    perror(const char *s);
void    pabort(const char *format, ...) __attribute__((noreturn));

#endif
