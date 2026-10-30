/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:54:14 by ajeremy           #+#    #+#             */
/*   Updated: 2026/10/30 18:54:15 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *concat_strings;
	size_t size = ft_strlen(s1) + ft_strlen(s2) + 1;
	size_t i;
	size_t j;

	if (!s1 || !s2)
		return (NULL);
	concat_strings = (char *)malloc(size);
	if (!concat_strings)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size && s1[j])
		concat_strings[i++] = s1[j++];
	j = 0;
	while (i < size && *s2)
		concat_strings[i++] = s2[j++];
	concat_strings[i] = '\0';
	return (concat_strings);
}
