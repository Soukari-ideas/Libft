/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta </var/spool/mail/maonesta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 18:36:11 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/08 19:26:11 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tampon;

	if (!lst)
		return ;
	if (!*lst || !del)
		return ;
	while ((*lst) != NULL)
	{
		tampon = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(tampon, del);
	}
}
