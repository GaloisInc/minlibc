#include <errno.h>
#include <string.h>
#include <stdio.h>

char  *strerror(int errnum)
{
  static char buf[1024];
  switch(errnum) {
    case EBADF: return "Bad file.\n";
    case EACCES: return "Access prohibited.\n";
  }
  sprintf(buf, "Unkown error: %d", errnum);
  return buf;
}

