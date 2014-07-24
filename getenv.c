#include <stdlib.h>

char *getenv(const char *name __attribute__((unused)))
{
  return NULL; // There is no environment, so this always returns "not found"
}
