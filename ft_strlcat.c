/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:54:23 by ajeremy           #+#    #+#             */
/*   Updated: 2026/10/30 18:54:24 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t i;
	size_t j;
	size_t s_size;
	size_t len;

	s_size = ft_strlen(src);
	if (!dsize)
		return (s_size + dsize);
	i = 0;
	while (i < dsize && dest[i])
		i++;
	if (i == dsize)
		return (dsize + s_size);
	j = 0;
	len = i;
	while (src[j] && i < dsize - 1)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (len + s_size);
}
