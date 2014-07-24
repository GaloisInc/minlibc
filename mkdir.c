#include <sys/stat.h>
#include <stdio.h>
#include <errno.h>

int mkdir(const char *path __attribute__((unused)),
    mode_t mode __attribute__((unused)))
{
  printf("mkdir\n");
  errno = ENOENT;
  return -1;
}

