#include <stdio.h>
#include <errno.h>

int fflush(FILE *stream)
{
  if((stream == stdin) || (stream == stdout) || (stream == stderr)) {
    return 0;
  } else {
    errno = EBADF;
    return EOF;
  }
}
