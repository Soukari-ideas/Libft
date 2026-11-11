/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta </var/spool/mail/maonesta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 16:28:07 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/06 17:38:08 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strrchr(const char *string, int searchedChar )
{
	int		i;
	char	*ptr;
	char	*str;

	ptr = NULL;
	str = (char *)string;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)searchedChar)
			ptr = &str[i];
		i++;
	}
	if ((char)searchedChar == '\0')
		ptr = &str[i];
	return (ptr);
}
/*
int	main(void)
{
	char const	chaine[] = "Voyon voir si ma fonction fonctionne";
	int			find;
	char		*result;

	find = 'i';
	result = strrchr(chaine, find);
	printf("%s", result);
	return (0);
}
*/
