/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:55:25 by ajeremy           #+#    #+#             */
/*   Updated: 2026/10/30 18:55:26 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int cmp_substr(const char *str, const char *substr, size_t len);

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		if (big[i] == *little && cmp_substr((big + i), little, len - i))
		{
			return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}

static int cmp_substr(const char *str, const char *substr, size_t len)
{
	size_t i;

	i = 0;
	while (i < len && substr[i] && str[i] == substr[i])
		i++;
	return (!substr[i]);
}
