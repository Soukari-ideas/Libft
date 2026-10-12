#include <unistd.h>
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	tab[] = "Je me demande si cela va fonctionne.";
	int	fd;

	fd = open("imtext.txt", O_WRONLY | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("mince l'ouverture du fichier a echoue.");
		return (1);
	}
	ft_putendl_fd(tab, fd);
	close(fd);
	return (0);
}
*/
