/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeremy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:39:18 by ajeremy           #+#    #+#             */
/*   Updated: 2026/11/02 16:44:03 by ajeremy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*create_node(void *content,
					void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	head = create_node(lst->content, f, del);
	if (!head)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		new_node = create_node(lst->content, f, del);
		if (!new_node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	return (head);
}

static t_list	*create_node(void *content,
		void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	void	*new_content;

	new_content = f(content);
	new_node = ft_lstnew(new_content);
	if (!new_node)
	{
		del(new_content);
		return (NULL);
	}
	return (new_node);
}
