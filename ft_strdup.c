#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t s_len;
	char *new_string;

	s_len = ft_strlen(s);
	new_string = (char *)malloc(s_len + 1);
	if (!new_string)
		return (NULL);
	ft_strlcpy(new_string, s, s_len + 1);
	return (new_string);
}
