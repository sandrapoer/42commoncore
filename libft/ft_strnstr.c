/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:55:12 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:55:13 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates first occurrence of the null-terminated string little
// in the string big, where not more than len characters are
// searched.

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && big[i + j] == little[j] && i + j < len)
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

/*
int main(void)
{
	#include <stdio.h>
	const char *big = "Thisisalongstringisntit?";
	const char *little = "string";
	size_t n1 = 6;
	size_t n2 = 20;

	printf("%s%s\n", "Expected null          --> ", (char*)ft_strnstr(big, little, n1));
	printf("%s%s\n", "Expected stringisntit? --> ", (char*)ft_strnstr(big, little, n2));
	return (0);
}
*/