//header

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	int temp;
	
	len = 0;
	if (n <= 0)
		len++;
	temp = n;
	while (temp != 0)
	{
		len++;
		temp /= 10;
	}
	str = malloc(len + 1);
	if (str == 0)
		return (0);
	return (str);
}

int main(void)
{
	int n = 12345;
	char *result = ft_itoa(n);
	printf("%s\n", result);
	free(result);
	return (0);
}