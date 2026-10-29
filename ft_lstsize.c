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
