#include <langinfo.h>

char *nl_langinfo(nl_item item __attribute__((unused)))
{
  return "UTF8";
}
