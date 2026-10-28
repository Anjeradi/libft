#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "libft.h"

#define buff_size 100

int main(void)
{
  	char *str = "Otra prueba";
	int fd = open("prueba.txt", O_CREAT | O_WRONLY | O_APPEND, 0666);

	ft_putendl_fd(str, fd);

	close(fd);

	return 0;
}
