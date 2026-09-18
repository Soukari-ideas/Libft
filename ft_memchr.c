#include <stddef.h>

void	*memchr(const void * memoryBlock, int searchedChar, size_t size)
{
	unsigned char *ptr;
	size_t		i;

	ptr = (unsigned char *)memoryBlock;
	i = 0;
	while (i < size)
	{
		if (ptr[i] == (unsigned char)searchedChar)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	tab [30] = "lettre e est la lettre cible.";
	int	cible = 'e';
	size_t	size = 30 * sizeof(unsigned char);
	
	void	*result = memchr(tab, cible, size);
	printf("%p\n", result);
	printf("%p", (void *)&tab[1]);
	return (0);
}
*/
