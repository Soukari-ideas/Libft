#include <stdlib.h>
#include "libft.h"

t_list	*lstnew(void *content)
{
	void	*nod;

	nod = malloc(sizeof(content));
	if (!nod)
		return (NULL);
	nod -> content = content;
	nod -> next = NULL;
	return (nod);
}
