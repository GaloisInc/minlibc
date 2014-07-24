#include <fcntl.h>
#include <stdio.h>
#include <errno.h>

int creat(const char *path __attribute__((unused)),
    mode_t mode  __attribute__((unused)))
{
  printf("creat\n");
  errno = ENOSYS;
  return (-1);
}

