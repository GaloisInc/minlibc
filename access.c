#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int access(const char *pathname __attribute__ ((unused)),
           int mode __attribute__ ((unused)))
{
  printf("access\n");
  errno = ENOENT;
  return (-1);
}
