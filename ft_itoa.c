/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:36:03 by ajeremy           #+#    #+#             */
/*   Updated: 2026/11/02 17:50:02 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		count_digits(int n);
static void			build_number(char *number, int n,
						size_t size, unsigned int is_negative);
static unsigned int	abs_number(int n);

char	*ft_itoa(int n)
{
	size_t			size;
	char			*number;
	unsigned int	is_negative;

	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	size = count_digits(n);
	if (is_negative)
		size++;
	number = (char *)malloc(size + 1);
	if (!number)
		return (NULL);
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

static void	build_number(char *number, int n,
		size_t size, unsigned int is_negative)
{
	char	*p;

	p = number + size - 1;
	if (n == 0)
		number[0] = '0';
	while (n != 0)
	{
		*p = abs_number(n) % 10 + '0';
		p--;
		n /= 10;
	}
	if (is_negative)
		number[0] = '-';
	number[size] = '\0';
}

static unsigned int	abs_number(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
