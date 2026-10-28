#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "libft.h"

#define buff_size 100

int main(void)
{
  	int number = 100;

	ft_putnbr_fd(number, STDOUT);
	ft_putchar_fd('\n', STDOUT);

	return 0;
}
