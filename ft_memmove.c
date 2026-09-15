#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t			i;

	if (n == 0 || dest == src)
		return (dest); // on coupe le programme si il n'y a rien a copier ou si dest et src start au mm endroit
	d = dest; // pointe sur le premier octet de destination
	s = src; //  pointe sur le premier octet de source
	i = 0; //    etablis un simple compteur
	while (i < n && d != s + i) 
		i++; 
	if (i < n)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n]; // d[5 -1] = d[4 + 5 -1] d4 = t puis un s puis un e et enfin un espace.
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i]; 
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	test_source[20] = "Ceci est un test.";
	ft_memmove(test_source, test_source + 5, 6);
	printf("%s\n", test_source);
	return (0);
}
*/
