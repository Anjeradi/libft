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
	size_t i;
	char		*dptr;
	const char	*sptr;

	dptr = dest;
	sptr = src;
	if ((uintptr_t)dptr > (uintptr_t)sptr)
	{
		while (n-- > 0)
			dptr[n] = sptr[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dptr[i] = sptr[i];
			i++;
		}
	}
	return (dest);
}
