#include <stdio.h>
#include <string.h>
#include "libft.h"

#define buff_size 100

int main(void)
{
	char *src = "Esto es una prueba";
	char *prueba = ft_strdup(src);
	//char dest[buff_size] = "Esto es una prueba";
	
	if (!prueba)
		puts("NULL");
	else
		puts(prueba);
	free(prueba);
	return 0;
}
