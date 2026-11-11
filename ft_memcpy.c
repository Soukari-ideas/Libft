/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta </var/spool/mail/maonesta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 16:42:56 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/06 17:36:54 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptrs;
	unsigned char	*ptrd;

	ptrs = (unsigned char *)src;
	ptrd = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		ptrd[i] = ptrs[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	source[] = "copy sucess!";
	char	dest[] = "lksjflksjfl";

	memcpy(dest, source, 9);
	printf("%s", dest);
	return (0);
}
*/
