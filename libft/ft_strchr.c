// header

// string search character
// returns a pointer to the matched character or NULL
// if the character is not found. '\0' considered part of string

char	*ft_strchr(const char *s, int c)
{
	unsigned long	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c) == '\0'
		return ((char *)&s[i]);
	return (0);
}