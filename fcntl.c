#include <fcntl.h>
#include <errno.h>

int fcntl(int fd __attribute__((unused)),
          int cmd __attribute__((unused)),
          ...)
{
  errno = EACCES;
  return -1;
}
