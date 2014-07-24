#include <unistd.h>

int getpagesize(void)
{
  return runtime_pagesize();
}
