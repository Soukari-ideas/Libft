int	ft_strcmp(const char *first, const char * second)
{
	int	i;

	i = 0;
	while (first[i] && first[i] == second[i])
		i++;
	return ((unsigned char)first[i] - (unsigned char) second[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	const char first [] = "je suis un stud";
	const char second [] = "je ne suis pas un stud";
	printf("%d", ft_strcmp(first, second));
	return (0);
}
*/
