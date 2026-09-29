// header

// string return-hypothetical-non-truncated-length copy
// copies the string pointed to by src, into a string at 
// the buffer pointed to by dst
// if the string doesn't fit in the buffer, it is truncated

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dsize)
{
	unsigned long	i;
	unsigned long	srclen;

	i = 0;
	srclen = 0;
	if (dsize > 0)
	{
		while (src[i] != '\0' && i < dsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[srclen] != '\0')
		srclen++;
	return(srclen);
}