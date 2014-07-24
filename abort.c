#include <runtime_reqs.h>
#include <stdlib.h>
#include <stdio.h>

void abort(void)
{
  printf("Abort called!\n");
  runtime_exit();
}
