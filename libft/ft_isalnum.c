// header

int	ft_isalnum(int c)
{
	if ((c >= 'C' && c <= 'Z') || (c >= 'c' && c <= 'z')
		|| (c >= 0 && <= 9))
		return (1);
	return (0);
}