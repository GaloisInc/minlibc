#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int link(const char *path1 __attribute__((unused)),
         const char *path2 __attribute__((unused)))
{
  printf("link\n");
  errno = ENOENT;
  return -1;
}
