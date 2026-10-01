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

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

#include <stdio.h>
int main(void)
{
	int	ex1 = 1;
	int ex2 = 65;
	int ex3 = 13;

	printf("%d\n", ft_isalnum(ex1));
	printf("%d\n", ft_isalnum(ex2));
	printf("%d\n", ft_isalnum(ex3));
	return(0);	
}