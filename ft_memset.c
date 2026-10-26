#include "libft.h"

void *ft_memset(void *a, int c, size_t n)
{
	unsigned char *p;

	p = a;
	while (p < (unsigned char *)a + n)
		*(p++) = (unsigned char)c;
	return (a);
}
