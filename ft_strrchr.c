#include "libft.h"

char *strrchr(const char *s, int c)
{
  const char *last_ptr;
  if (!s)
    return (NULL);
  while (*s)
  {
    if ((unsigned char)*s == (unsigned char)c)
      last_ptr = s;
    s++;
  }
  return (last_ptr); 
}
