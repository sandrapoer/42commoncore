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

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

#include <stdio.h>
int main(void)
{
	int ex1 = 'a';
	int ex2 = 'z';
	int ex3 = 'A';
	printf("%c\n", ft_toupper(ex1));
	printf("%c\n", ft_toupper(ex2));
	printf("%c\n", ft_toupper(ex3));
	return (0);
}