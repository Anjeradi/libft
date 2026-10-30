/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:48:31 by ajeremy           #+#    #+#             */
/*   Updated: 2026/10/30 18:48:32 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *next_node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		next_node = (*lst)->next;
		free(*lst);
		(*lst) = next_node;
	}
	*lst = NULL;
}
