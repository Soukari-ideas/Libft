/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta </var/spool/mail/maonesta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:17:00 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/09 17:37:24 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	tab [30] = "lettre e est la lettre cible.";
	int	cible = 'e';
	size_t	size = 30 * sizeof(unsigned char);
	
	void	*result = memchr(tab, cible, size);
	printf("%p\n", result);
	printf("%p", (void *)&tab[1]);
	return (0);
}
*/
