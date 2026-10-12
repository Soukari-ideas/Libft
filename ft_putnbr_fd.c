#include <fcntl.h>
#include <unistd.h>

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
			return ;
	}
	if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}

	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar(n % 10 + '0', fd);
}
/*
#include <stdio.h>

int	main(void)
{
	int	fd;

	fd = open("imtext.txt", O_WRONLY | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("echec de l'ouverture du fichier.");
		return (1);
	}
	ft_putnbr_fd(1234, fd);
	close(fd);
	return (0);
}
*/
