/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maonesta </var/spool/mail/maonesta>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 21:28:05 by maonesta          #+#    #+#             */
/*   Updated: 2026/11/05 21:28:18 by maonesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*
int	main(void)
{
	int		fd;
	char	c;

	fd = open("imtext.txt", O_WRONLY, 0644);
	c = 'c';
	ft_putchar_fd (c, fd);
	return (0);
}
*/
