/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:52:44 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:52:46 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compares the first n bytes of memory areas s1 and s2

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
int main(void)
{
	#include <stdio.h>
	char *s1 = "HELLO";
	char *s2 = "Hello";
	size_t n1 = 1;
	size_t n2 = 3;

	printf("%s%d\n", "Expected 0   --> ", ft_memcmp(s1, s2, n1));
	printf("%s%d\n", "Expected -32 --> ", ft_memcmp(s1, s2, n2));
	return (0);
}
*/