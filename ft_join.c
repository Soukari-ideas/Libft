#include <stdlib.h>
#include <stddef.h>

static int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		i;
	char	*result;
	int		len1;

	len1 = ft_strlen(s1);
	i = 0;
	len = len1 + ft_strlen(s2);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	i = 0;
	while ((len1 + i) < len)
	{
		result[len1 + i] = s2[i];
		i++;
	}
	result[len1 + i] = '\0';
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	char const test[] = "J'ai hate de la ";
	char const	test2[] = "rentree.";
	char	*tab;

	tab = ft_strjoin(test, test2);
	if (!tab)
	{
		printf("Echoue.");
		return (1);
	}
	printf("%s", tab);
	free(tab);
	return (0);
}
*/
