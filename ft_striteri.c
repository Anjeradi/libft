#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t len;
    size_t i;

	if (!s || !f)
		return ;
	len = ft_strlen(s) + 1;
    i = 0;
	while (i < len)
		f(i++, s);
}
