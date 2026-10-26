#include "libft.h"

void *ft_memset(void *a, int c, size_t n)
{
	size_t i;
	void *a_first_addr;

	i = 0;
	a_first_addr = a;
	while (a < a_first_addr + n)
		*(a++) = (unsigned char)c;
	return (a_first_addr);
}
