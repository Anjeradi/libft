/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:53:54 by ajeremy           #+#    #+#             */
/*   Updated: 2026/10/30 18:53:55 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t s_len;
	char *new_string;

	s_len = ft_strlen(s);
	new_string = (char *)malloc(s_len + 1);
	if (!new_string)
		return (NULL);
	ft_strlcpy(new_string, s, s_len + 1);
	return (new_string);
}
