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
	int	c;

	c = 0;
	while (s[c] != '\0')
		c++;
	return (c);
}

/*
#include <stdio.h>
int main(void)
{
	char*	ex1 = "1234";
	char*	ex2 = " ";
	char*	ex3 = "";

	printf("%lu\n", ft_strlen(ex1));
	printf("%lu\n", ft_strlen(ex2));
	printf("%lu\n", ft_strlen(ex3));
	return(0);	
}
*/