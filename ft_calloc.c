/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta <maonesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:07:37 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/09 16:37:29 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void			*tab;
	size_t			total;
	size_t			i;
	unsigned char	*ptr;

	total = elementCount * elementSize;
	if (elementCount != 0 && elementSize > (size_t)(-1) / elementCount)
		return (0);
	tab = malloc(total);
	if (!tab)
		return (NULL);
	ptr = (unsigned char *)tab;
	i = 0;
	while (i < total)
		ptr[i++] = 0;
	return (tab);
}

/*
#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	i;

	i = 0;
	tab = calloc(12, sizeof(int));
	while (i < 12)
	{
		printf("%d ", tab[i]);
		i++;
	}
	free (tab);
	return (0);
}
*/
