/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:18:43 by ajeremy           #+#    #+#             */
/*   Updated: 2026/11/02 17:19:31 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_ptr;
	const char	*start;
	size_t		len;	

	len = ft_strlen(s);
	start = s;
	last_ptr = NULL;
	while (s <= start + len)
	{
		if ((char)*s == (char)c)
			last_ptr = s;
		s++;
	}
	return ((char *)last_ptr);
}
