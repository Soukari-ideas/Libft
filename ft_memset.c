#include <stddef.h>

void	*memset(void *s, int value, size_t n)
{
	size_t			i; //simple compteur en size_t car comparaison avec n.
	unsigned char	*ptr; // sert a caster le void en unsigned char *

	ptr = (unsigned char *)s; // la variable ptr contient l'adresse du premiere octet de l element pointe par s.
	i = 0;
	while (i < n) // a chaque incrementation de 1 on passe a l octet suivant donc while i < taille d octet a change
	{
		ptr[i] = (unsigned char)value; // first octet de s = la valeur choisis
		i++; // on passe a l octet suivant.
	}
	return (s); // renvoie de la position initial
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	array[4] = {12, 23, 42, 84};
	size_t size = 4 * sizeof(int);

	memset(array, 0, size);
	i = 0;
	while (i < 4)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}
*/
