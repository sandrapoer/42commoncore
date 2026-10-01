/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:52:05 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:52:07 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}

#include <stdio.h>
int main(void)
{
	int	ex1 = -1;
	int ex2 = 0;
	int ex3 = 4454;

	printf("%d\n", ft_isascii(ex1));
	printf("%d\n", ft_isascii(ex2));
	printf("%d\n", ft_isascii(ex3));
	return(0);	
}