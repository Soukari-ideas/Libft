/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta </var/spool/mail/maonesta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:00:59 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/09 17:11:18 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lend;
	size_t	i;
	size_t	lens;

	lens = ft_len(src);
	lend = 0;
	while (lend < size && dst[lend])
		lend++;
	if (lend == size)
		return (size + lens);
	i = 0;
	while (src[i] && (lend + i) < size - 1)
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	return (lend + lens);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dst[20] = "I love ";
	char	src[5] = "cats";
	size_t	size;
	size_t	len;
	
	size = 4;
	len = ft_strlcat(dst, src, size);
	printf("La chaine a concatener est : %s\n", src);
	printf("Elle a besoins de %zu oct et est limiter a %zu oct\n", len, size);
	if (len >= size)
		printf("La chaine a ete tronque.\n");
	else
		printf("la concatenation est complete.\n");
	return (0);
}
*/
