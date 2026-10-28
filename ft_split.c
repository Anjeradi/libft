#include "libft.h"

static size_t word_count(char const *s, char c);
static void free_null(char **arr, size_t len);
static size_t word_len(char const *s);
static char **array_init(char const *s, size_t total_size, char c);

char **ft_split(char const *s, char c)
{
	size_t arr_size;
	size_t i;
	char **s_array;

	if (!s)
		return (NULL);
	arr_size = word_count(s, c) + 1;
	s_array = array_init(s, arr_size);
	if (!s_array)
		return (NULL);
	return (s_array);
}

static size_t word_count(char const *s, char c)
{
	size_t count;
	
	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		if (ft_isprint(*s))
			count++;
		while (ft_isprint(*s))
			s++;
	}
	return (count);
}

static void free_null(char **arr, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
		free(arr[i++]);
	free(arr);
}

static char **array_init(char const *s, size_t total_size, char c)
{
	size_t i;
	size_t len;
	char **string_array;

	string_array = (char **)malloc(total_size);
	if (!string_array)
		return (NULL);
	i = 0;
	while (i < total_size && *s)
	{
		if(*s == c)
			s++;
		len = word_len(s);
		string_array[i] = (char *)malloc(len);
		if (!string_array[i])
		{
			free_null(string_array, i);
			return (NULL);
		}
		ft_strlcpy(string_array, s, len);
		s += len;
		i++;
	}
	return (string_array);
}
