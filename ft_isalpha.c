//#include <unistd.h>

int	ft_isalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
/*
void	test(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isalpha(str[i]))
			write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	test("La vie est belle a 42.");
	return (0);
}
*/
