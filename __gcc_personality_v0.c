#include <stdio.h>
#include <stdlib.h>

int __gcc_personality_v0(int v, ...) __attribute__((noreturn));

int __gcc_personality_v0(int v, ...)
{
  printf("You are in a very strange, bad place. (GCC personality %d)\n", v);
  abort();
}
