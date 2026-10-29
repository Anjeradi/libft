#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "libft.h"

#define buff_size 100

void free_null(char **arr);
char function(unsigned int i, char c)
{
	(void)i;
	return (c + 13);
}

int main(void)
{
  	char *str = "Esto es una prueba";
	char *prueba = ft_strmapi(str, function);
	if (!prueba)
		return 1;
	puts(prueba);
	free(prueba);
	return 0;
}

void free_null(char **arr)
{
	size_t i;

	i = 0;
	while (arr[i] != NULL)
		free(arr[i++]);
	free(arr);
}
