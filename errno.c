#include <errno.h>

int errno;

int *__errno_location()
{
  return &errno;
}
