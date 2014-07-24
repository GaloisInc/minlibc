#include <sys/stat.h>
#include <errno.h>
#include <stdio.h>

int __lxstat(int, const char *, struct stat *);

int __lxstat(int ver __attribute__((unused)),
             const char *path __attribute__((unused)),
             struct stat *stat_buf __attribute__((unused)))
{
  printf("__lxstat\n");
  errno = ENOENT;
  return -1;
}
