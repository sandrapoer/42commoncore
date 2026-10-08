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
	char	*substr;

	substr = malloc(1);
	if (substr == 0)
		return (0);
	substr[0] = '\0';
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	lenstr;

	if (s == 0)
		return (0);
	lenstr = ft_strlen(s);
	if (start >= lenstr)
		return (empty_str());
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
