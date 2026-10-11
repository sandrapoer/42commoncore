/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:51:52 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:51:59 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
int main(void)
{
	#include <stdio.h>
	int ex1 = 65; // A
	int ex2 = 64; // @
	int ex3 = 97; // a

	printf("%s%d\n","Expected: 1 --> ", ft_isalpha(ex1));
	printf("%s%d\n","Expected: 0 --> ", ft_isalpha(ex2));
	printf("%s%d\n","Expected: 1 --> ", ft_isalpha(ex3));
	return (0);
}
*/