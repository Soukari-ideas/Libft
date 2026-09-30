#include <stddef.h>
#include <stdlib.h>

void	*calloc(size_t elementCount, size_t elementSize)
{
	void		*tab;
	size_t		total;
	size_t		i;
	unsigned char	*ptr;

	total = elementCount * elementSize;
	tab = malloc(total);
	if (!tab)
		return (NULL);
	ptr = (unsigned char *)tab;
	i = 0;
	while (i < total)
		ptr[i++] = 0;
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	i;

	i = 0;
	tab = calloc(12, sizeof(int));
	while (i < 12)
	{
		printf("%d ", tab[i]);
		i++;
	}
	free (tab);
	return (0);
}
*/
