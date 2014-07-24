#include <time.h>
#include <runtime_reqs.h>

time_t time(time_t *t)
{
  time_t retval = runtime_time();
  if(t) *t = retval;
  return retval;
}
