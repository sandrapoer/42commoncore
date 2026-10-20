/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:52:21 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:52:23 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
int main(void)
{
	#include <stdio.h>
	int ex1 = 57; // 9
	int ex2 = 128; // €
	int ex3 = 97; // a

	printf("%s%d\n","Expected: 1 --> ", ft_isprint(ex1));
	printf("%s%d\n","Expected: 0 --> ", ft_isprint(ex2));
	printf("%s%d\n","Expected: 1 --> ", ft_isprint(ex3));
	return (0);
}
*/