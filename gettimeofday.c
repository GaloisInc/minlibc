#include <sys/time.h>
#include <sys/resource.h>
#include <errno.h>
#include <runtime_reqs.h>

int gettimeofday(struct timeval *tv,
                 struct timezone *tz __attribute__((unused)))
{
  return runtime_gettimeofday(tv);
}
