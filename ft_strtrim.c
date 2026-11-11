/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta </var/spool/mail/maonesta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:35:03 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/05 15:55:51 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	not_over(int *i, char const *s1, char const *set)
{
	int	origin;

	origin = *i;
	while (s1[*i] && is_set(s1[*i], set))
		(*i)++;
	if (s1[*i] == '\0')
	{
		*i = origin;
		return (0);
	}
	*i = origin;
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_string;
	int		i;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && is_set(s1[i], set))
		i++;
	start = i;
	while (s1[i] && not_over(&i, s1, set))
		i++;
	end = i;
	trimmed_string = malloc((end - start) + 1);
	if (!trimmed_string)
		return (NULL);
	i = 0;
	while (start < end)
		trimmed_string[i++] = s1[start++];
	trimmed_string[i] = '\0';
	return (trimmed_string);
}
/*
int	main(void)
{
	char const	chaine[] = "xzxzxzxJ'aime 42xzxzxzxz";
	char const	sep[] = "xz";
	char		*result;

	result = ft_strtrim(chaine, sep);
	if (!result)
	{
		printf("failed");
		return (1);
	}
	printf("%s", result);
	free(result);
	return (0);
}
*/
