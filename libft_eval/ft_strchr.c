/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:53:23 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:53:24 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// string search character
// returns a pointer to the first occurence of the matched character or NULL
// if the character is not found. '\0' considered part of string

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

/*
int main(void)
{
	#include <stdio.h>
	char * ex1 = "Hello";
	char * ex2 = "";
	int c1 = 'l';
	int c2 = '0';

	printf("%s%s\n", "Expected llo  --> ", (char*)ft_strchr(ex1, c1));
	printf("%s%s\n", "Expected null --> ", (char*)ft_strchr(ex1, c2));
	printf("%s%s\n", "Expected null --> ", (char*)ft_strchr(ex2, c1));
	printf("%s%s\n", "Expected null --> ", (char*)ft_strchr(ex2, c2));
	return (0);
}
*/