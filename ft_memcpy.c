#include <stddef.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *ptrs;
	unsigned char *ptrd;

	ptrs = (unsigned char *)src;
	ptrd = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		ptrd[i] = ptrs[i];
		i++;
	}
	return (dest);
}
