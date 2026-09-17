#include <stddef.h>

char	*strrchr(const char *s, int c)
{
	int	i;
	int	last;
	int	occurence;

	occurence = 0;
	last = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			last = i;
			occurence = 1;
		}
		i++;
	}
	if (!occurence && c == '\0')
		return ((char *)&s[i]);
	else if (occurence)
		return ((char *)&s[last]);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char chaine [] = "Je suis une constante.";

	printf("%s", strrchr(chaine, 's'));
	return (0);
}
*/
