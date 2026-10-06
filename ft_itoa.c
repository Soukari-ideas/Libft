#include <stddef.h>
#include <stdlib.h>

static int	count_digit(long int n)
{
		int	count;

		count = 1;
		if (n < 0)
		{
			count++;
			n = -n;
		}
		while (n >= 10)
		{
			n = n / 10;
			count++;
		}
		return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nb;	
	int		len;

	nb = n;
	len = count_digit(nb);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}

	else if (nb == 0)
		result[0] = '0';	
	while (nb > 0)
	{
		result[--len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
   printf("%s", ft_itoa(2345));
	return (0);
}
*/
