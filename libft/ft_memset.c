/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:53:15 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 17:02:21 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memset() function fills the first n bytes of the memory area
// pointed to by a with the constant byte c.
// void* is unknown type --> cannot be indexed
// p holds same address as s but as unsigned char * --> can be indexed

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
int main(void)
{
	#include <stdio.h>
	char s[]= "Hello Wolrd!";
	int c = 64;
	size_t n = 6;

	// %p returns address not whats stored there
	// --> need to cast for %s to get whats stored
	printf("%s%s\n", "Expected @@@@@@World! --> ", (char*)ft_memset(s, c, n));
	return (0);
}
*/