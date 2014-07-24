#include <signal.h>
#include <stdio.h>

int raise(int sig)
{
  pabort("Someone called raise! (signal: %d)\n", sig);
}
