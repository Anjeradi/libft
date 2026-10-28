#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  const unsigned char *s1ptr;
  const unsigned char *s2ptr;

  if (!n)
	  return (0);
  s1ptr = (const unsigned char *)s1;
  s2ptr = (const unsigned char *)s2;
  while ((void *)s1ptr < s1 + n && *s1ptr == *s2ptr)
  {
	  s1ptr++;
	  s2ptr++;
  }
  return (*s1ptr - *s2ptr);
}
