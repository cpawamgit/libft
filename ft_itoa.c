#include "libft.h"

static void	ft_isposorneg(int *n, int *i)
{
	if (*n < 0)
	{
		*i = 1;
		*n = *n * -1;
	}
	else
		*i = 0;
}

static void	ft_get_power_and_block(int *power, int *block, int n)
{
	*power = 1;
	*block = 1;
	while (*power * 10 <= n)
	{
		*power = *power * 10;
		*block = *block + 1;
	}
}

char	*ft_itoa(int n)
{
	int i;
	int power;
	int block;
	char *result;

	ft_isposorneg(&n, &i);
	ft_get_power_and_block(&power, &block, n);
	result = (char *)malloc(sizeof(char) * block + 1 + i);
	if (!result)
		return (NULL);
	if (i == 1)
	{
		result[0] = '-';
		block++;
	}
	while (i < block)
	{
		result[i] = n / power + 48;
		n = n % power;
		power = power / 10;
		i++;
	}
	result[i] = '\0';
	return (result);
}
