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

#include <stdio.h>
int main(void)
{
	int	ex1 = '1';
	int ex2 = '0';
	int ex3 = '4';

	printf("%d\n", ft_isdigit(ex1));
	printf("%d\n", ft_isdigit(ex2));
	printf("%d\n", ft_isdigit(ex3));
	return(0);	
}