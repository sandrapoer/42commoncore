/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:51:41 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:51:44 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
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

	printf("%s%d\n","Expected: 1 --> ", ft_isalnum(ex1));
	printf("%s%d\n","Expected: 0 --> ", ft_isalnum(ex2));
	printf("%s%d\n","Expected: 1 --> ", ft_isalnum(ex3));
	return (0);
}
*/
