#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
  const char *sptr;

  sptr = (const char *)s;
  while ((size_t)sptr < (size_t)s + n && *sptr != (unsigned char)c)
    sptr++;
  if (*sptr == c)
    return ((void *)sptr);
  return (NULL);
}
