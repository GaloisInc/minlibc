#include <stdio.h>
#include <errno.h>

ssize_t getline(char **lineptr __attribute__((unused)),
                size_t *n __attribute__ ((unused)),
                FILE *stream __attribute__ ((unused)))
{
  printf("getline\n");
  errno = ENOSYS;
  return (-1);
}
