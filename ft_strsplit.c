#include "libft.h"

static int	ft_count_words(const char *str, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		while (str[i] != c && str[i + 1] != '\0')
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
			while (s[i + j] != c)
				j++;
			printf("%d\n", j);
			board[boardfilled] = (char *)malloc(sizeof(char) * j + 1);
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
			i = i + k;
			k = 0;
			j = 0;
		}
		i++;
	}
}

char **ft_strsplit(const char *s, char c)
{
	char **splitstr;

	splitstr = (char **)malloc(sizeof(char *) * ft_count_words(s, c) + 1);
	if (splitstr)
	{
		ft_fillboard(splitstr, s, c);
		splitstr[ft_count_words(s, c)] = 0;
		return (splitstr);
	}
	else
		return (NULL);
}

int main()
{
	int i;

	i = 0;
	printf("%d\n", ft_count_words("           yo", ' '));
	char **toto = ft_strsplit("            yo", ' ');
	while(toto[i])
	{
		printf("%s\n", toto[i]);
		i++;
	}
	return (0);
}