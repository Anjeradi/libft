/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:55:58 by ajeremy           #+#    #+#             */
/*   Updated: 2026/11/02 17:23:10 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	s_length;

	s_length = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > s_length)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		p = (char *)malloc(ft_strlen(s + start) + 1);
	else
		p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (start < s_length && i < len)
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}
