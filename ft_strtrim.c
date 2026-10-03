#include <stdlib.h>
#include <stddef.h>

static size_t ft_strlen (char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	is_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	is_it_over(char const *c, char const *set)
{
	size_t	i;

	i = 0;
	while (c[i] && is_set(c[i], set))
		i++;
	if (c[i] == '\0')
		return (1);
	else
		return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	len;
	size_t	j;

	len = ft_strlen(s1);
	j = 0;
	i = 0;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	while (s1[i] && is_set(s1[i], set))
		i++;
	while (s1[i] && !is_it_over(&s1[i], set))
	{
			result[j] = s1[i];
			i++;
			j++;
	}
	result[j] = '\0';
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char const	tester[] = "xxxyyyyje test mon code de xy pour voir si il me coupe ou pasxxxyy";
	char const	set[] = "xyy";
	char	*tab;

	tab = ft_strtrim(tester, set);
	if (!tab)
	{
		printf("Skills issue");
		return (1);
	}
	printf("%s", tab);
	free(tab);
	return (0);
}
*/
