/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:48:51 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:49:00 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
    	|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
    	i++;
	if (str[i]	== '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	number = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	number = number * sign;
	return (number);
}

#include <stdio.h>
int main(void)
{
	char*	ex1 = "1234";
	char*	ex2 = " -1234";
	char*	ex3 = " +1234";
	char*	ex4 = " --1234";

	printf("%d\n", ft_atoi(ex1));
	printf("%d\n", ft_atoi(ex2));
	printf("%d\n", ft_atoi(ex3));
	printf("%d\n", ft_atoi(ex4));
	return(0);	
}