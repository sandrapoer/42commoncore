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

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

int main(void)
{
	char str[20] = "Hello, World!";
	char character = 'W';

	printf("%s\n", ft_strchr(str, character));
	return 0;
}