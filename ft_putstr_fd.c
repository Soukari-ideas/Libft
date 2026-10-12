#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{

	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	string[] = "silent hill 3 goated.";
	int		fd;

	fd = open("imtext.txt", O_WRONLY | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("L'ouverture du fichier a echoue.");
		return (1);
	}
	ft_putstr_fd(string, fd);
	close(fd);
	return (0);
}
*/
