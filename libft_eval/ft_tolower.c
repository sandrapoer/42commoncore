/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:56:24 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:56:26 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*
int main(void)
{
	#include <stdio.h>
	int ex1 = 'H';
	int ex2 = '1';
	int ex3 = 'g';

	printf("%s%c\n", "Expected h --> ", ft_tolower(ex1));
	printf("%s%c\n", "Expected 1 --> ", ft_tolower(ex2));
	printf("%s%c\n", "Expected g --> ", ft_tolower(ex3));
	return (0);
}
*/