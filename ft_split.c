#include <stdlib.h>
#include <stddef.h>

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	count = 1;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static	char *ultimate_copy(char const *s, char c, int *i)
{
	char	*result;
	int		start;
	int		end;
	int		x;

	x = 0;
	start = 0;
	end = 0;
	while (s[*i] && s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	end = *i;
	if (end > start)
	{
		result = malloc((end - start) + 1);
		if (!result)
			return (NULL);
		while (start < end)
			result[x++] = s[start++];
		result[x] = '\0';
		return (result);
	}
	return (NULL);
}
char	**ft_split(char const *s, char c)
{
	int			i;
	int			j;
	char	**tab;
	int		len;

	i = 0;
	j = 0;
	len = count_words(s, c);
	tab = malloc(len * sizeof(char *));
	if (!tab)
		return (NULL);
	if (len > 1)
	{
		while (s[i])
		{
			tab[j] = ultimate_copy(s, c, &i);
			if (tab[j])
				j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**tab;
	int		i;
	char const	s[] = "j'aime coder la nuit, mais je dois prendre de bonnes habitudes.";

	tab = ft_split(s, ' ');
	if (!tab)
	{
		printf("skills issue");
		return (1);
	}
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (0);
}
*/
