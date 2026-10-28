#include "libft.h"

void *ft_calloc(size_t n, size_t size)
{
	void *mem_area;

	if (!n || !size)
		return (malloc(0));
	if (n > MAX_SPACE / size)
		return (NULL);
	mem_area = malloc(n * size);
	if (!mem_area)
		return (NULL);
	ft_bzero(mem_area, n * size);
	return (mem_area);
}
