#include <sys/stat.h>
#include <stdio.h>
#include <errno.h>

int mkfifo(const char *pathname __attribute__ ((unused)),
    mode_t mode __attribute__ ((unused)))
{
  printf("mkfifo\n");
  errno = ENOENT;
  return -1;
}

