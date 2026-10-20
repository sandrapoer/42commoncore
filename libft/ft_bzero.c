/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:51:02 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 17:33:22 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// byte-array zero
// This function writes zeros ('\0') to the memory starting at the
// location pointed to by s == erases n bytes.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

/*
int main(void)
{
	#include <stdio.h>
	char	s[] = "Hello World!";
	size_t	n = 5;
	size_t	i;

	ft_bzero(s, n);
	printf("Expected: 0 0 0 0 0 87 111 114 108 100 33 --> ");
	i = 0;
	while (i < sizeof(s) - 1)
	{
		printf("%d ", s[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/