#include <stdio.h>
#include <errno.h>
#include <runtime_reqs.h>

int putchar(int c)
{
  runtime_write(1, (char*)&c);
  return c;
}
