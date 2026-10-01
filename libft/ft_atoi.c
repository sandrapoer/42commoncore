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

int	ft_atoi(char *str)
{
	int	c;
	int sign;
	int	number;

	c = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
        || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
    	i++;
	if (str[c]	== '-' || str[c] == '+')
	{
		if (str[c] == '-')
			sign = -1;
		c++;
	}
	number = 0;
	while (str[c] >= '0' && str[c] <= '9')
	{
		number = number * 10 + (str[c] - '0');
		c++;
	}
	number = number * sign;
	return (number);
}
