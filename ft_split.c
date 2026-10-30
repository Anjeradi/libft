/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:53:19 by ajeremy           #+#    #+#             */
/*   Updated: 2026/10/30 18:53:23 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c);
static unsigned int	free_null(char **arr);
static size_t	ignore_sep(char const *s, char c);
static unsigned int	array_init(char **arr, char const *s, char c, size_t len);

char	**ft_split(char const *s, char c)
{
	char	**s_array;
	
	if (!s)
		return (NULL);
	s_array = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!s_array)
		return (NULL);
	if (!array_init(s_array, s, c, ft_strlen(s) + 1))
		return (NULL);
	return (s_array);
}

static size_t	word_count(char const *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	first_c;
	
	count = 0;
	i = 0;
	first_c = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		first_c = i;
		while (s[i] != c && s[i])
			i++;
		if (i > first_c)
			count++;
	}
	return (count);
}

static unsigned int	free_null(char **arr)
{
	char	**start;

	start = arr;
	while (*arr)
		free(arr++);
	free(start);
	return (0);
}

static size_t	ignore_sep(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static unsigned int	array_init(char **arr, char const *s, char c, size_t len)
{
	char const	*start;
	char const	*temp_ptr;

	start = s;
	while (s < start + len)
	{
		 s += ignore_sep(s, c);
		temp_ptr = s;
		if (!*s)
			break ;
		while (*s && *s != c)
			s++;
		if (s > temp_ptr)
		{
			*arr = (char *)malloc(s - temp_ptr + 1);
			if (!*arr)
				return (free_null(arr));
		}
		ft_strlcpy(*(arr++), temp_ptr, s - temp_ptr + 1);
	}
	*arr = NULL;
	return (1);
}
