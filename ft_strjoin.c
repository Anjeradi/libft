/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:54:14 by ajeremy           #+#    #+#             */
/*   Updated: 2026/11/02 16:55:39 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat_strings;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	concat_strings = (char *)malloc(len_s1 + len_s2 + 1);
	if (!concat_strings)
		return (NULL);
	ft_memcpy(concat_strings, s1, len_s1);
	ft_memcpy(concat_strings + len_s1, s2, len_s2);
	concat_strings[len_s1 + len_s2] = '\0';
	return (concat_strings);
}
