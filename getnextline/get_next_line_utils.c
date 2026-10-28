#include "get_next_line.h"
/*
char	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*ptr;

	total = nmemb * size;
	if (size != 0 && total / size != nmemb)
		return (0);
	if (total == 0)
		ptr = malloc(1);
	else
		ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
*/