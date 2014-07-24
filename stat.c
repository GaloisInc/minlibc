#include <errno.h>
#include <sys/stat.h>

int stat(const char *path __attribute__((unused)),
         struct stat *buf __attribute__((unused)))
{
    errno = EACCES;
    return -1;
}
