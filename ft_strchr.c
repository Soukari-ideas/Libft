#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char string[11] = "Fonctionne";
	printf("%s", ft_strchr(string, 101));
	return (0);
}
*/
