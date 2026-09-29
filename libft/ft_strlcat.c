// header

// string return-hypothetical-non-truncated-length catenate
// catenates the string pointed to by src, after the string  
// pointed to by dst (overwriting its terminating null byte)
// if the string doesn't fit in the buffer, it is truncated

unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dsize)
{
	unsigned long	i;	
	unsigned long	dstlen;
	unsigned long	srclen;

	i = 0;
	while (dst[i] != '\0')
		i++;
	dstlen = i;
	i = 0;
	while (src[i] != '\0')
		i++;
	srclen = i;
	if (dstlen >= dsize)
		return (dsize + srclen);
	i = 0;
	while (src[i] != '\0' && dstlen + i < dsize - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dest[dstlen + i] = '\0'
	return (dstlen + srclen)
}