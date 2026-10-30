/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:48:22 by ajeremy           #+#    #+#             */
/*   Updated: 2026/10/30 18:48:23 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *temp_ptr;
	if (!lst || !new)
		return ;
	temp_ptr = *lst;
	*lst = new;
	(*lst)->next = temp_ptr;
}
