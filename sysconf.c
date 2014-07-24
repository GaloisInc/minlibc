#include <unistd.h>
#include <stdio.h>
#include <errno.h>

long sysconf(int name)
{
  switch(name) {
    case _SC_PAGESIZE:
      return 4096;
    case _SC_CLK_TCK:
      printf("i was called.\n");
      return 100; /* FIXME: number of clock ticks per second */
  }

  return 0;
}
