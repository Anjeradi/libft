/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:46:13 by ajeremy           #+#    #+#             */
/*   Updated: 2026/10/30 18:46:14 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *s)
{
	unsigned int is_negative;
	int number;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	is_negative = 0;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			is_negative = 1;
		}
		s++;
	}
	number = 0;
	while (ft_isdigit(*s))
	{
		if (is_negative)
			number = number * 10 - (*s - '0');
		else
			number = number * 10 + (*s - '0');
		s++;
	}
	return (number);

}
