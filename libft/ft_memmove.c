//header

// Similar to memcpy, but memory areas may overlap

void	*ft_memmove(void *dest, const void *src, unsigned long n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned long		i;

	d = (unsigned char*)dest;
	s = (const unsigned char*)src;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > n)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}