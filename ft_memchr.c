/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:49:33 by ajeremy           #+#    #+#             */
/*   Updated: 2026/10/30 18:49:34 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *sptr;
	sptr = (const unsigned char *)s;

	while (sptr < (unsigned char *)s + n)
	{
		if (*sptr == (unsigned char)c)
			return ((void *)sptr);
		sptr++;
	}
	return (NULL);
}
