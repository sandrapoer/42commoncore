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

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}


#include <stdio.h>
int main(void)
{
	int	ex1 = 120;
	int ex2 = 0;
	int ex3 = 45;

	printf("%d\n", ft_isalpha(ex1));
	printf("%d\n", ft_isalpha(ex2));
	printf("%d\n", ft_isalpha(ex3));
	return(0);	
}
