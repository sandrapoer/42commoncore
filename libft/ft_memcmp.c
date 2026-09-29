//header

// compares the first n bytes of memory areas s1 and s2

int	ft_memcmp(const void *s1, const void *s2, unsigned long n)
{
	unsigned long		i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;

	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}