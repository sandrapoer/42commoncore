/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:52:36 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:52:38 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memory search character
// scans initial n bytes of the memory area pointed to by
// s for the first instance of c. c and s are interpreted
// as unsigned char

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;

	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)&p[i]);
		i++;
	}
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
	size_t n = 3;

	printf("%s%s\n", "Expected llo  --> ", (char*)ft_memchr(ex1, c1, n));
	printf("%s%s\n", "Expected null --> ", (char*)ft_memchr(ex1, c2, n));
	printf("%s%s\n", "Expected null --> ", (char*)ft_memchr(ex2, c1, n));
	printf("%s%s\n", "Expected null --> ", (char*)ft_memchr(ex2, c2, n));
	return (0);
}
*/