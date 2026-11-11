/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta </var/spool/mail/maonesta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:47:48 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/06 16:41:56 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptdest;
	unsigned char	*ptsrc;
	size_t			i;

	ptdest = (unsigned char *)dest;
	ptsrc = (unsigned char *)src;
	i = 0;
	if (src == dest)
		return (dest);
	while (i < n && dest < src)
	{
		ptdest[i] = ptsrc[i];
		i++;
	}
	while (n > 0 && dest > src)
	{
		ptdest[n - 1] = ptsrc[n - 1];
		n--;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	test_source[20] = "Ceci est un test.";
	ft_memmove(test_source, test_source + 5, 6);
	printf("%s\n", test_source);
	return (0);
}
*/
