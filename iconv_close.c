#include <iconv.h>

int iconv_close(iconv_t cd __attribute__((unused)))
{
  return 0;
}
