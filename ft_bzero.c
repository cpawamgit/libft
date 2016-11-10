#include <string.h>

void 	*ft_bzero(void *s, size_t n)
{
	size_t i;
	char *t;

	t = s;
	i = 0;
	while (i < n)
	{
		t[i] = 0;
		i++;
	}
	return (s);
}
