//header
// The memset() function fills the first n bytes of the memory area
// pointed to by a with the constant byte c.
// void* is unknown type --> cannot be indexed
// p holds same address as a but as unsigned char * --> can be indexed

void	ft_memset(void *a, int c, unsigned long n)
{
	unsigned char	*p;
	unsigned long	i;

	p = (unsigned char *)a;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (a);
}