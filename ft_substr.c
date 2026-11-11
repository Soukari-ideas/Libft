/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta </var/spool/mail/maonesta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:23:56 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/09 14:08:55 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	s_len;

	s_len = count_words(s);
	if (start >= s_len)
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	result = malloc((s_len - start) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	char    montest[] = "Ceci est un test adequois";
	char    *tab;

	tab = ft_substr(montest, 10, 42);
	printf("%s", tab);
	free(tab);
	return (0);
}
*/
