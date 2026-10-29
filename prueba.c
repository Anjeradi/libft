#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "libft.h"

#define buff_size 100

void free_null(char **arr);

int main(void)
{
  	char *str = "Esto es una prueba";
	char **array = ft_split(str, 'E');
	if (!array)
		return 1;
	for (size_t i = 0; array[i] != NULL; i++)
		puts(array[i]);
	free_null(array);
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
