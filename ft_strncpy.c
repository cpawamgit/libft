#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	while (i <= n)
	{
		s1[i] = '\0';
		i++;
	}
	return (s1);
}
