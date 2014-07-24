#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <runtime_reqs.h>

int puts(const char *s)
{
  int len = strlen(s);
  runtime_write(len, (char*)s);
  runtime_write(1,"\n");
  return 0;
}

