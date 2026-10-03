//header

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	size_t	i;

	first = 0;
	while (s1[first])
	{
		i = 0;
		while (set[i] && set[i] != s1[first])
			i++;
		if (!set[i])
			break ;
		first++;
	}
	last = ft_strlen(s1);
	while (last > first)
	{
		i = 0;
		while (set[i] && set[i] != s1[last - 1])
			i++;
		if (!set[i])
			break ;
		last--;
	}
	return (ft_substr(s1, first, last - first));
}

int main(void)
{
	char* s1 = "aaabbbcccaaabbbcccdddeeefffdddaaa";
	char* set = "da";

	printf("%s\n", ft_strtrim(s1, set));
	free(ft_strtrim(s1, set));
	return (0);
}