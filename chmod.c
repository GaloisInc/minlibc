#include <sys/stat.h>
#include <stdio.h>
#include <errno.h>

int chmod(const char *path __attribute__((unused)),
    mode_t mode __attribute__((unused)))
{
  printf("chmod\n");
  errno = ENOSYS;
  return (-1);
}
