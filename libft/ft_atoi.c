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

#include "libft.h"

// on overflow, behave like glibc atoi(): (int)strtol(), which clamps
// to LONG_MAX / LONG_MIN before the conversion to int
static int	overflow(int sign)
{
	if (sign == 1)
		return ((int)LONG_MAX);
	return ((int)LONG_MIN);
}

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
		if (number > (LONG_MAX - (str[i] - '0')) / 10)
			return (overflow(sign));
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(number * sign));
}
