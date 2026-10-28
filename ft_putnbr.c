#include "libft.h"

static unsigned int abs_value(int n);

void ft_putnbr_fd(int n, int fd)
{
	if (n / 10 == 0)
	{
		if (n < 0)
			ft_putchar_fd('-', fd);
	}
	else
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(abs_value(n % 10) + '0', fd);
}

static unsigned int abs_value(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
