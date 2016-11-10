char	*ft_strcpy(char *s1,const char *s2)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (s2[size] != '\0')
		size++;
	while (i < size)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
