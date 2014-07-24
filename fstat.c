#include <sys/stat.h>
#include <errno.h>

int fstat(int fd __attribute__((unused)),
          struct stat *buf __attribute__((unused)))
{
  errno = EBADF;
  return -1;
}
