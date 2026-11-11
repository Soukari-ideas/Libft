/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta <maonesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:28:45 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/06 17:30:57 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (little[j] && big[i + j] == little[j] && (i + j) < len)
				j++;
		}
		if (!(little[j]))
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
	const   char find[] = "";
	const   char chaine[] = "je suis un stud, j'ai reussis";
	size_t  len;

	len = 7;
	printf("%s", ft_strnstr(chaine, find, len));
	return (0);
}
*/
