#include <sys/vfs.h>
#include <stdio.h>
#include <errno.h>

int statfs(const char *path __attribute__ ((unused)),
           struct statfs *buf __attribute__ ((unused)))
{
  printf("statfs\n");
  errno = ENOSYS;
  return (-1);
}

