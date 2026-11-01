/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:47:56 by ajeremy           #+#    #+#             */
/*   Updated: 2026/10/30 18:47:57 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int n);
static void	build_number(char *number, int n, size_t size, unsigned int is_negative);

char	*ft_itoa(int n)
{
	size_t	size;
	char	*number;
	unsigned int		is_negative;
	unsigned int		offset;

	is_negative = 0;
	size = count_digits(n);
	if (n < 0)
	{
		is_negative = 1;
		offset = 2;
	}
	else
		offset = 1;
	number = (char *)malloc(size + offset);
	if (!number)
		return (NULL);
	if (is_negative)
		number[0] = '-';
	build_number(number, n, size, is_negative);
	return (number);
}

static size_t	count_digits(int n)
{
	size_t	digits;

	if (n == 0)
		return (1);

	digits = 0;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

static void	build_number(char *number, int n, size_t size, unsigned int is_negative)
{
	char	*p;

	p = number + size;
	if (!is_negative)
		p--;
	while (n != 0)
	{
		if (is_negative)
			*p = -(n % 10) + '0';
		else
			*p = n % 10 + '0';
		p--;
		n /= 10;
	}
	number[size] = '\0';
}
