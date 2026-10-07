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
#include <stdio.h>
int main(void)
{
	int	ex1 = -1;
	int ex2 = 33;
	int ex3 = 4454;

	printf("%d\n", ft_isprint(ex1));
	printf("%d\n", ft_isprint(ex2));
	printf("%d\n", ft_isprint(ex3));
	return(0);	
}
*/