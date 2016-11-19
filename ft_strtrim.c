#include "libft.h"

static int	ft_iswspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

static void ft_totalw(const char *str, size_t *i, size_t *j)
{
	int k;

	*i = 0;
	*j = 0;
	k = 0;
	while (ft_iswspace(str[*i]))
		*i = *i + 1;
	while (ft_iswspace(str[ft_strlen(str) - k - 1]))
	{
		*j = *j + 1;
		k++;
	}
}

char	*ft_strtrim(const char *s)
{
	size_t i;
	size_t j;
	size_t k;
	char *trimstr;

	k = 0;
	ft_totalw(s, &i, &j);
	if (i != j)
		trimstr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1 - i - j);
	else
		trimstr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1 - i);
	if (trimstr && s != NULL)
	{
		if ((i + j) >= ft_strlen(s))
			trimstr[k] = '\0';
		else
			while (k < ft_strlen(s) - i - j)
			{
				trimstr[k] = s[k + i];
				k++;
			}
			trimstr[k] = '\0';
			return (trimstr);
	}
		else
			return (NULL);
	}
