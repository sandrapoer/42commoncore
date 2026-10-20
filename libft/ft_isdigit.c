/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:52:13 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:52:15 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
int main(void)
{
	#include <stdio.h>
	int ex1 = 57; // 9
	int ex2 = 64; // @
	int ex3 = 97; // a

	printf("%s%d\n","Expected: 1 --> ", ft_isdigit(ex1));
	printf("%s%d\n","Expected: 0 --> ", ft_isdigit(ex2));
	printf("%s%d\n","Expected: 0 --> ", ft_isdigit(ex3));
	return (0);
}
*/