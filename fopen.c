#include <stdio.h>
#include <errno.h>

FILE *fopen(const char *path __attribute__((unused)),
            const char *mode __attribute__((unused)))
{
  printf("fopen\n");
  errno = EACCES;
  return 0;
}
