/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:50:13 by ajeremy           #+#    #+#             */
/*   Updated: 2026/10/30 18:50:14 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *a, int c, size_t n)
{
	unsigned char *p;

	p = a;
	while (p < (unsigned char *)a + n)
		*(p++) = (unsigned char)c;
	return (a);
}
