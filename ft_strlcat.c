/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:54:23 by ajeremy           #+#    #+#             */
/*   Updated: 2026/11/16 18:50:47 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s_size;
	size_t	len;

	s_size = ft_strlen(src);
	if (!size)
		return (s_size);
	i = 0;
	while (i < size && dst[i])
		i++;
	if (i == size)
		return (size + s_size);
	j = 0;
	len = i;
	while (src[j] && i < size - 1)
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (len + s_size);
}
