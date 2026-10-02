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

//header

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

#include <stdio.h>
int main(void)
{
	int ex1 = '8';
	int ex2 = 'z';
	int ex3 = 'A';
	printf("%c\n", ft_tolower(ex1));
	printf("%c\n", ft_tolower(ex2));
	printf("%c\n", ft_tolower(ex3));
	return (0);
}