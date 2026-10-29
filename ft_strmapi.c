#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new_string;
	size_t len;
	char const *start_s;
	char *start_news;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s) + 1;
	new_string = (char *)malloc(len);
	if (!new_string)
		return (NULL);
	start_s = s;
	start_news = new_string;
	while (s < start_s + len)
	{
		*(new_string)++ = f(s - start_s, *s);
		s++;
	}
	new_string = '\0';
	return (start_news);
}
