#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_ptr;
	const char	*start;
	size_t		len;	

	len = ft_strlen(s);
	start = s;
	last_ptr = NULL;
	while (s <= start + len)
	{
	  if ((char)*s == (char)c)
	    last_ptr = s;
	  s++;
	}
	return ((char *)last_ptr); 
}
