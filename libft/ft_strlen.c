/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:54:54 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 16:34:55 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (s[c] != '\0')
		c++;
	return (c);
}

/*
int main(void)
{
	#include <stdio.h>
	char *ex1 = "Hello";
	char *ex2 = "123";
	char *ex3 = "";

	printf("%s%ld\n","Expected: 5 --> ", ft_strlen(ex1));
	printf("%s%ld\n","Expected: 3 --> ", ft_strlen(ex2));
	printf("%s%ld\n","Expected: 0 --> ", ft_strlen(ex3));
	return (0);
}
*/