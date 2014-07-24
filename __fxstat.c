#include <sys/stat.h>
#include <errno.h>

int __fxstat(int, int, struct stat*);

int __fxstat(int ver __attribute__((unused)),
             int fildes __attribute__((unused)),
             struct stat *stat_buf __attribute__((unused)))
{
  errno = ENOENT;
  return -1;
}
