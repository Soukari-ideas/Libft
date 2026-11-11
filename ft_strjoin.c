/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta <maonesta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:00:44 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/08 22:14:24 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

static int	count_words(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	char	*result;
	int		len1;

	len1 = count_words(s1);
	i = 0;
	len = len1 + count_words(s2);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	i = 0;
	while ((len1 + i) < len)
	{
		result[len1 + i] = s2[i];
		i++;
	}
	result[len1 + i] = '\0';
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	char const test[] = "J'ai hate de la ";
	char const	test2[] = "rentree.";
	char	*tab;

	tab = ft_strjoin(test, test2);
	if (!tab)
	{
		printf("Echoue.");
		return (1);
	}
	printf("%s", tab);
	free(tab);
	return (0);
}
*/
