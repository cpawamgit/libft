#include "libft.h"

static int	ft_iswspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

static void ft_totalw(const char *str, int *i, int *j)
{
	if (ft_iswspace(str[0]))
		*i = 1;
	else
		*i = 0;
	if (ft_iswspace(str[ft_strlen(str)-1]))
		*j = 1;
	else
		*j = 0;
}

char	*ft_srtrim(const char *s)
{
	int i;
	int j;
	size_t k;
	char *trimstr;

	k = 0;
	ft_totalw(s, &i, &j);
	trimstr = (char *)malloc(sizeof(ft_strlen(s) + 1 - i - j));
	if (trimstr)
	{
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
