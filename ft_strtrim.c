#include "libft.h"

static unsigned int cmp_set(char c, char const *set);

char *ft_strtrim(char const *s1, char const *set)
{
	char *trimmed_s;
	size_t i;

	if (!s1 || !set)
		return (NULL);
	trimmed_s = (char *)malloc(ft_strlen(s1) + 1);
	if (!trimmed_s)
		return (NULL);
	i = 0;
	while (*s1)
	{
		if (!cmp_set(*s1, set))
			trimmed_s[i++] = *s1;
		s1++;
	}
	trimmed_s[i] = '\0';
	return (trimmed_s);
}

static unsigned int cmp_set(char c, char const *set)
{
	while (*set && *set != c)
		set++;
	return (c == *set);
}

