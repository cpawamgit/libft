#include "libft.h"

static int	ft_count_words(const char *str, char c)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0' && i < ft_strlen(str))
	{
		while (str[i] != c && str[i] != '\0')
		{
			i++;
			j = 1;
		}
		k = k + j;
		j = 0;
		i++;
	}
	return(k);
}

static void	ft_fillboard(char **board, const char *s, char c)
{
	int	i;
	int	j;
	int	k;
	int	boardfilled;

	i = 0;
	j = 0;
	k = 0;
	boardfilled = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			board[boardfilled] = (char *)malloc(sizeof(char) * (j + 1));
			if (board[boardfilled])
			{
				while (k < j)
				{
					board[boardfilled][k] = s[i + k];
					k++;
				}
				board[boardfilled][k] = '\0';
			}
			boardfilled++;
			i = i + k - 1;
			k = 0;
			j = 0;
		}
		i++;
	}
}

char **ft_strsplit(const char *s, char c)
{
	char **splitstr;

	splitstr = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (splitstr)
	{
		ft_fillboard(splitstr, s, c);
		splitstr[ft_count_words(s, c)] = NULL;
		return (splitstr);
	}
	else
		return (NULL);
}
