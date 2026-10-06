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

size_t	len_nbr(int n)
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
		nbr /=10;
	}
	return (str);
}

/*
int main(void)
{
	int n = -1234500;
	char *result = ft_itoa(n);
	printf("%s\n", result);
	free(result);
	return (0);
}
*/
