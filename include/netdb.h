#ifndef MINLIBC_NETDB_H
#define MINLIBC_NETDB_H

#define HOST_NOT_FOUND          112
#define NO_DATA                 113
#define NO_RECOVERY             114
#define TRY_AGAIN               115

extern int h_errno;

int *__h_errno_location(void);

#endif
