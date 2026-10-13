/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:55:56 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:55:57 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates memory (using malloc(3)) and returns a
// substring from the string ‘s’.
// The substring starts at index ‘start’ and has a
// maximum length of ‘len’.
#include "libft.h"

static char	*empty_str(void)
{
	char	*newstr;

	newstr = malloc(1);
	if (newstr == 0)
		return (0);
	newstr[0] = '\0';
	return (newstr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;
	size_t	lenstr;

	if (s == 0)
		return (0);
	lenstr = ft_strlen(s);
	if (start >= lenstr)
		return (empty_str());
	if (len > lenstr - start)
		len = lenstr - start;
	newstr = malloc(len + 1);
	if (newstr == 0)
		return (0);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		newstr[i] = s[start + i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/*
int main(void)
{
	#include <stdio.h>
	char const *s = "Hello World!";
	unsigned int start = 7;
	size_t len = 5;

	printf("%s%s\n", "Expected orld! --> ", ft_substr(s, start, len));
	return (0); 
}
*/