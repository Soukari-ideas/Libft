/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta </var/spool/mail/maonesta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 20:30:50 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/05 20:31:17 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	up_maj(unsigned int index, char *c)
{
		if (index % 2 == 0 && *c >= 'a' && *c <= 'z')
			*c -= 32;
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	tab[] = "J'espere que je vais m'en sortir.";
	
	ft_striteri(tab, &up_maj);
	printf("%s", tab);
	return (0);
}
*/
