/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:51:06 by ajeremy           #+#    #+#             */
/*   Updated: 2026/10/30 18:51:12 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int abs_value(int n);

void ft_putnbr_fd(int n, int fd)
{
	if (n / 10 == 0)
	{
		if (n < 0)
			ft_putchar_fd('-', fd);
	}
	else
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(abs_value(n % 10) + '0', fd);
}

static unsigned int abs_value(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
