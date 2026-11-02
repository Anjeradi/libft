/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:55:46 by ajeremy           #+#    #+#             */
/*   Updated: 2026/11/02 17:22:31 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	cmp_set(char c, char const *set);
static size_t		count_total_alloc(char const *s, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_s;
	size_t	total_len;

	if (!s1 || !set)
		return (NULL);
	total_len = count_total_alloc(s1, set);
	if (!total_len)
	{
		return (ft_strdup(""));
	}
	trimmed_s = (char *)malloc(total_len + 1);
	if (!trimmed_s)
		return (NULL);
	while (*s1 && cmp_set(*s1, set))
		s1++;
	ft_memcpy(trimmed_s, s1, total_len);
	trimmed_s[total_len] = '\0';
	return (trimmed_s);
}

static unsigned int	cmp_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static size_t	count_total_alloc(char const *s, char const *set)
{
	char const	*start;
	char const	*end;

	while (cmp_set(*s, set))
		s++;
	if (!*s)
		return (0);
	start = s;
	while (*s)
	{
		if (!cmp_set(*s, set))
			end = s;
		s++;
	}
	return (end - start + 1);
}
