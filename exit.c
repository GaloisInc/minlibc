#include <stdlib.h>
#include <stdio.h>
#include <runtime_reqs.h>

void exit(int status)
{
  printf("Exit called with %d\n", status);
  runtime_exit();
}
