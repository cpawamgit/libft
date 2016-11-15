#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t i;
	size_t j;
	size_t lentofind;

	i = 0;
	j = 0;
	if (ft_strlen(tofind) == 0)
		return ((char *)str);
	if (ft_strlen(tofind) > ft_strlen(str))
		return (NULL);
	lentofind = ft_strlen(tofind);
	while (str[i] != '\0' && i < len)
	{
		if (tofind[j] == str[i + j])
		{
			while (tofind[j] == str[i + j] && str[i + j] != '\0' && i + j < len)
			{
				j++;
			}
			if (j == lentofind)
				return ((char *)str) + i;
		}
		j = 0;
		i++;
	}
	return (NULL);
}