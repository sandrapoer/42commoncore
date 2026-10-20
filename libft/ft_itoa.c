/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:54:39 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/06 15:54:43 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_nbr(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nbr;

	nbr = n;
	len = len_nbr(n);
	str = malloc(len + 1);
	if (str == 0)
		return (0);
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		len--;
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

/*
int main(void)
{
	#include <stdio.h>
	int n1 = -2147483648;
	int n2 = 0;
	int n3 = 42;

	printf("%s%s\n", "Expected -2147483648 --> ", ft_itoa(n1));
	printf("%s%s\n", "Expected 0           --> ", ft_itoa(n2));
	printf("%s%s\n", "Expected 42          --> ", ft_itoa(n3));
	return (0);
}
*/