/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta </var/spool/mail/maonesta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 18:47:18 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/09 14:06:59 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
char	major(unsigned int index, char c)
{
	if (index % 2 == 0 && c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		x;
	int		len;

	x = 0;
	len = count_words(s);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	while (s[x])
	{
		result[x] = f(x, s[x]);
		x++;
	}
	result[x] = '\0';
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char const	chaine[] = "J'espere que je vais m'en sortir,";
	char		*tab;

	tab = ft_strmapi(chaine, &major);
	if (!tab)
	{	
		printf("I guess you failed.");
		return (1);
	}
	printf("%s", tab);
	free(tab);
	return (0);
}
*/
