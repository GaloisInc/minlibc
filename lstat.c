#include <sys/stat.h>
#include <errno.h>

int lstat(const char *path __attribute__((unused)),
          struct stat *buf __attribute__((unused)))
{
  errno = ENOENT;
  return -1;
}
