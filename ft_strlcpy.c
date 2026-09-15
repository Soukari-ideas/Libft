#include <stddef.h>

static size_t	ft_len(const char *str)
{
	size_t int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t len;
	
	len = ft_len(src);
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] && i < size - 1) // permet de faire une place pour le \0
	{
		dest[i] = src[i]; 
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[20] = "";
	char	src[20] = "j'aime les fleurs.";
	size_t	size = 7;
	size_t	len;

	len = strlcpy(dest, src, size);
	printf("la chaine original fait %ld octets et la fonction a copier %ld octets\n", len, size);
	return (0);
}
