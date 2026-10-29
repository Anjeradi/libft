#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *node;
	
	if (!lst || !new)
		return ;
	node = *lst;
	while (node->next)
		node = node->next;
	node->next = new;
}
