#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new_string;
	size_t len;
    size_t i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s) + 1;
	new_string = (char *)malloc(len);
	if (!new_string)
		return (NULL);
    i = 0;
	while (i < len)
    {
		new_string[i] = f(i, s[i]);
        i++;
    }
	new_string[i] = '\0';
	return (new_string);
}
