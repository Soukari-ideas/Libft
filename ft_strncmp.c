/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta </var/spool/mail/maonesta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 20:47:46 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/09 16:14:29 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)first;
	b = (unsigned char *)second;
	i = 0;
	while ((i < n) && (a[i]) && (a[i] == b[i]))
		i++;
	if (i == n)
		return (0);
	return (a[i] - b[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	const char first [] = "je suis un stud";
	const char second [] = "je ne suis pas un stud";
	printf("%d", ft_strncmp(first, second, 3));
	return (0);
}
*/
