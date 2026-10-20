/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:54:17 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/06 15:54:22 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*newstr;

	if (s == 0)
		return (0);
	i = 0;
	newstr = malloc(ft_strlen(s) + 1);
	if (newstr == 0)
		return (0);
	while (s[i])
	{
		newstr[i] = f((unsigned int)i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/*
char test_toupper(unsigned int i, char c)
{
	(void)i;
	return ((char)ft_toupper(c));
}

int main(void)
{
	#include <stdio.h>
	char const *s = "Hello World!";
	char *result = ft_strmapi(s, test_toupper);

	printf("%s%s\n", "Expected HELLO WORLD! --> ", result);
	free (result);
	return (0);
}
*/