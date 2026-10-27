#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
  int i;
  char *dptr;
  const char *sptr;

  dptr = dest;
  sptr = src;
  if (dptr > sptr)
  {
    i = (int)n - 1;
    while (i >= 0)
    {
      dptr[i] = sptr[i];
      i--;
    }
  } 
  else {
    i = 0;
    while((size_t)i < n)
    {
      dptr[i] = sptr[i];
      i++;
    }
  }
  return (dest);
}
