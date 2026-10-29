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
