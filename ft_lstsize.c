/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:49:23 by ajeremy           #+#    #+#             */
/*   Updated: 2026/10/30 18:49:24 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_lstsize(t_list *lst)
{
	unsigned int i;

	if (!lst)
		return (0);
	i = 0;
	while(lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
