#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	len;
	

	len = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		len++;
	}
	return (len);
}
