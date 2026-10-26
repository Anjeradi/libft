#include "libft.h"

int ft_atoi(const char *s)
{
	unsigned int is_negative;
	int number;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	is_negative = 0;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			is_negative = 1;
		}
		s++;
	}
	number = 0;
	while (ft_isdigit(*s))
	{
		number = number * 10 + (*s - '0');
		s++;
	}
	if (is_negative)
		number = -number;
	return (number);

}
