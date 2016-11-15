#include <unistd.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_iswspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}

int main(int argc, char ** argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				if(ft_iswspace(argv[i][j + 1]))
					ft_putchar(argv[i][j] - 32);
				else
					ft_putchar(argv[i][j]);
			}
			else if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
			{
				if(ft_iswspace(argv[i][j + 1]))
					ft_putchar(argv[i][j]);
				else
					ft_putchar(argv[i][j] - 32);
			}
			else
				ft_putchar(argv[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}