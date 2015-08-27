#include <time.h>

struct tm *gmtime_r(const time_t *timep, struct tm *result)
{
  return localtime_r(timep, result);
}
