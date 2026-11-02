#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "libft.h"

#define buff_size 100

void free_null(char **arr);
char function(unsigned int i, char c)
{
	return (i % 2 == 1? 'a': c);
}

int main(void)
{
    char *prueba = ft_strtrim("aaaa", "a");
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
