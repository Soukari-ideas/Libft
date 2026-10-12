#include <unistd.h>
#include <fcntl.h>

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
