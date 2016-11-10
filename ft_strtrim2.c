#include "libft.h"

static int	ft_iswspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

static int ft_wspacecount(const char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (ft_iswspace(str[i]))
			j++;
		i++;
	}
	return (j);
}

char *ft_strtrim(const char *s)
{
	int i;
	int j;
	char *trimstr;

	i = 0;
	j = 0;
	trimstr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1 - ft_wspacecount(s)));
	if (trimstr)
	{
		while (s[i] != '\0')
		{
			if (!ft_iswspace(s[i + j]))
			{
				trimstr[i] = s[i + j];
				i++;
			}
			else
				j++;
		}
		return (trimstr);
	}
	else
		return (NULL);
}
