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
