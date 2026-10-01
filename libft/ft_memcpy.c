//header
// The memcpy() function copies n bytes from memory area src to
// memory area dest. The memory areas must not overlap. Use
// memmove(3) if the memory areas do overlap.

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t			i;

	d = (unsigned char*)dest;
	s = (const unsigned char*)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}