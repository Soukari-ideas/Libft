/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta <maonesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 20:38:39 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/08 22:13:07 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*result;
	char	*p;

	p = (char *)s;
	len = count_words(p);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (p[i])
	{
		result[i] = p[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	const char    chaine[30] = "j'adore mon setup portable.";
	char    *copy;

	copy = ft_strdup(chaine);
	printf("%s\n", copy);
	free(copy);
	return (0);
}
*/
