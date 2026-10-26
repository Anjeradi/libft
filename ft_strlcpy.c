#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t i;

	i = 0;
	if (dsize > 0)
	{
		while (src[i] && i < dsize - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
