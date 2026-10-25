/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:18:18 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/22 15:18:23 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list	*args;
	int		i;
	int		count; //absolute nr of returned chars

	if (!str)
		return (-1);
	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			count += ft_conversion(str[i], &args);			
		}
		else if (str[i] != '%')
			count += ft_putchar_fd(1, str[i])
	}
	va_end(args);
	return (count);
}


int main(void)
{
	#include <stdio.h>
	printf("%s\n\n", "Printf does this:");
	prinf("%");
	ft_printf("%s\n\n", "My Printf does this:");
	ft_printf("%", );
	return (0);
}