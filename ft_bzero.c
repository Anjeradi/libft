#include "libft.h"

void ft_bzero(void *a, size_t n)
{
	unsigned char *p;

	p = a;
	while (p < (unsigned char *)a + n)
		*(p++) = '\0';
}
