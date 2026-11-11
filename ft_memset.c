/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta </var/spool/mail/maonesta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:38:45 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/06 17:37:13 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int value, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)value;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	array[4] = {12, 23, 42, 84};
	size_t size = 4 * sizeof(int);

	memset(array, 0, size);
	i = 0;
	while (i < 4)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}
*/
