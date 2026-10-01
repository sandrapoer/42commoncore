// header

int	ft_atoi(char *str)
{
	int	c;
	int sign;
	int	number;

	c = 0;
	sign = 1;
	while (str[c] == ' ')
		c++;
	if (str[c]	== '-' || str[c] == '+')
	{
		if (str[c] == '-')
			sign = -1;
		c++;
	}
	number = 0;
	while (str[c] >= '0' && str[c] <= '9')
	{
		number = number * 10 + (str[c] - '0');
		c++;
	}
	number = number * sign;
	return (number);
}