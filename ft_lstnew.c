/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta </var/spool/mail/maonesta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:50:25 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/08 22:09:36 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nod;

	nod = malloc(sizeof(t_list));
	if (!nod)
		return (NULL);
	nod->content = content;
	nod->next = NULL;
	return (nod);
}
