/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:55:03 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:55:04 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compares the first at most n bytes of s1 and s2

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int main(void)
{
	#include <stdio.h>
	char *s1 = "HELLO";
	char *s2 = "Hello";
	size_t n1 = 1;
	size_t n2 = 3;

	printf("%s%d\n", "Expected 0   --> ", ft_strncmp(s1, s2, n1));
	printf("%s%d\n", "Expected -32 --> ", ft_strncmp(s1, s2, n2));
	return (0);
}
*/