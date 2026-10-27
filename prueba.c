#include <stdio.h>
#include <string.h>
#include "libft.h"

#define buff_size 100

int main(void)
{
  char *str = "Esto es una prueba";
  char *prueba = (char *)ft_memchr(str, 'z', 19);

  if (prueba)
	  puts(prueba);

	return 0;
}
