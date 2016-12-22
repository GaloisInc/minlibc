// This file is from the musl project:
//   http://musl-libc.org
// License: MIT (Please refer to the original project for details)

#include <stdlib.h>
#include <stdint.h>

static uint64_t seed;

void srand(unsigned s)
{
	seed = s-1;
}

int rand(void)
{
	seed = 6364136223846793005ULL*seed + 1;
	return seed>>33;
}
