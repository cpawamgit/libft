#include <string.h>

void 	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	char *t;

	t = s;
	i = 0;
	while (i < n)
	{
		t[i] = c;
		i++;
	}
	return (s);
}
