/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta <maonesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 16:57:25 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/09 17:26:10 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < size)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	char    chaine1[13] = "voyons voir.";
	char    chaine2[12] = "voyons vir.";
	int     function;
	size_t  size;

	size = 12;
	function = ft_memcmp(chaine1, chaine2, size);
	printf("%d\n", function);
	return (0);
}
*/
