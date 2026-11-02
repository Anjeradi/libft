/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:50:02 by ajeremy           #+#    #+#             */
/*   Updated: 2026/11/02 17:32:40 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	char		*dptr;
	const char	*sptr;

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
	else
	{
		i = 0;
		while ((size_t)i < n)
		{
			dptr[i] = sptr[i];
			i++;
		}
	}
	return (dest);
}
