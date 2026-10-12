/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:56:57 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:56:59 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*
int main(void)
{
	#include <stdio.h>
	int ex1 = 'H';
	int ex2 = '1';
	int ex3 = 'g';

	printf("%s%c\n", "Expected H --> ", ft_toupper(ex1));
	printf("%s%c\n", "Expected 1 --> ", ft_toupper(ex2));
	printf("%s%c\n", "Expected G --> ", ft_toupper(ex3));
	return (0);
}
*/