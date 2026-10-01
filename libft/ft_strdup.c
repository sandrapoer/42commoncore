//header
// use malloc()

// The strdup() function returns a pointer to a new string which is a
// duplicate of the string s.  Memory for the new string is obtained
// with malloc(3), and can be freed with free(3).

int	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

char	*ft_strdup(const char *s)
{
	char			*new_str;
	size_t		i;

	new_str = malloc(ft_strlen(s) * sizeof(char) +1);
	if (new_str == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}