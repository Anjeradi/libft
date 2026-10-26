#include <stdio.h>
#include <string.h>
#include "libft.h"

#define buff_size 100

int main(void)
{
	char *src = "Esto es una prueba";
	char dest[buff_size];

	memcpy(dest, src, 19);
	puts(dest);
	puts(src);

	ft_memcpy(dest, src, 19);
	puts(dest);
	puts(src);

	return 0;
}
