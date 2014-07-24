#include <stdio.h>
#include <stdlib.h>

void _Unwind_Resume(void *x) __attribute__((noreturn));

void _Unwind_Resume(void *x __attribute__((unused)))
{
  printf("Call to _Unwind_Resume ... how are you using pthreads?\n");
  abort();
}
