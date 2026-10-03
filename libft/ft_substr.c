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
// substring from the string ’s’.
// The substring starts at index ’start’ and has a
// maximum length of ’len’.
# include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t 	lenstr;

	lenstr = ft_strlen(s);
	if (start >= lenstr)
	{
		substr = malloc(1);
		if (substr == 0)
			return (0);
		substr[0] = '\0';
		return (substr);
	}
	if (len > lenstr - start)
		len = lenstr - start;
	substr = malloc(len + 1);
	if (substr == 0)
		return (0);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
int main(void)
{
	char *s = "Hello, World!";
	unsigned int start = 7;
	size_t len = 3;

	char *substr = ft_substr(s, start, len);
	if (substr != NULL)
	{
		printf("%s\n", substr);
		free(substr);
	}
	return 0;
}
*/