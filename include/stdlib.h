#ifndef MINLIBC_STDLIB_H
#define MINLIBC_STDLIB_H

#define NULL            0
#define EXIT_SUCCESS    0
#define EXIT_FAILURE    1

typedef unsigned long int size_t;

double    atof(const char *nptr);
int       atoi(const char *nptr);
long int  strtol(const char *nptr, char **endptr, int base);

char     *getenv(const char *name);
void      abort(void);
void      exit(int status);

void     *malloc(size_t size);
void     *realloc(void *ptr, size_t size);
void     *calloc(size_t nmemb, size_t size);
void      free(void *ptr);

int       mkstemp(char *template);

void     *bsearch(const void *, const void *, size_t, size_t,
                  int (*)(const void *, const void *));

int       putenv(char *str);
int       unsetenv(const char *name);

#endif
