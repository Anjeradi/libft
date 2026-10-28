#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *p;
	size_t i;

	if (!s)
		return (NULL);
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (*s && i < len)
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}
