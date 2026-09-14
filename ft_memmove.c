#include <stddef.h>

void	*memmove(void *dest, const void *src, size_t n)
{	
	if (n == 0)
		return (dest);
	size_t i;
	const unsigned char	*ptr;
	unsigned char	*ptr2;
	unsigned char tab[n];

	i = 0;
	ptr = (const unsigned char *)src;
	while (i < n)
	{
		tab[i] = ptr[i];
		i++;
	}
	i = 0;
	ptr2 = (unsigned char *)dest;
	while (i < n)
	{
		ptr2[i] = tab[i];
		i++;
	}
	return (dest);
}	
