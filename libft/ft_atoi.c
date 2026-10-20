/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:48:51 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/10 13:06:28 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	number;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	number = 0;
	while (ft_isdigit(str[i]))
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(number * sign));
}

/*
int main(void)
{
	#include <stdio.h>
	char*	ex1 = "1234";
	char*	ex2 = " --1234";
	char*	ex3 = " +1234";
	char*	ex4 = " -2147483648";

	printf("%s%d\n", "Expected 1234        --> ", ft_atoi(ex1));
	printf("%s%d\n", "Expected 0           --> ", ft_atoi(ex2));
	printf("%s%d\n", "Expected 1234        --> ", ft_atoi(ex3));
	printf("%s%d\n", "Expected -2147483648 --> ", ft_atoi(ex4));
}
*/