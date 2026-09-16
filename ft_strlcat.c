#include <stddef.h>

static size_t	ft_len(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t ft_strlcat(char *destination, const char *source, size_t BufferSize)
{
	size_t	lend;
	size_t	i;
	size_t	lens;

	lens = ft_len(source);
	lend = 0;
	while (lend < BufferSize && destination[lend])
		lend++;
	if (lend == BufferSize)
		return (BufferSize + lens);
	i = 0;
	while (source[i] && (lend + i) < BufferSize - 1)
	{
		destination[lend + i] = source[i];
		i++;
	}
	destination[lend + i] = '\0';
	return (lend + lens);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dst[20] = "I love ";
	char	src[5] = "cats";
	size_t	size;
	size_t	len;
	
	size = 4;
	len = ft_strlcat(dst, src, size);
	printf("La chaine a concatener est : %s\n", src);
	printf("Elle a besoins de %zu octets pour etre complete et est limiter a %zu octets\n", len, size);
	if (len >= size)
		printf("La chaine a ete tronque.\n");
	else
		printf("la concatenation est complete.\n");
	return (0);
}
*/
