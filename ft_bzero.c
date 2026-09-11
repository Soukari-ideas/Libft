#include <stddef.h>

void	bzero(void *s, size_t n)
{
	size_t	i;
	unsigned	char *ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	string[30] = "La vie est belle a 42.";
	bzero(string, 1);
	printf("%s", string);
	return (0);
}
*/
