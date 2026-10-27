/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 09:37:04 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/27 09:37:10 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
\n --> newline
\t --> tab
\\ --> backslash
\" --> double quote
\' --> single quote
*/

int	ft_conversion(char spec, va_list *args)
{
	if (spec == 'c')
		return (ft_putchar(va_arg(*args, int)));
	if (spec == 's')
		return (ft_print_str(va_arg(*args, char *)));
	if (spec == 'p')
		return (ft_print_ptr(va_arg(*args, void *)));
	if (spec == 'd' || spec == 'i')
		return (ft_print_nbr(va_arg(*args, int)));
	if (spec == 'u')
		return (ft_print_unsigned(va_arg(*args, unsigned int)));
	if (spec == 'x')
		return (ft_print_hex(va_arg(*args, unsigned int), 
			"0123456789abcdef"));
	if (spec == 'X')
		return (ft_print_hex(va_arg(*args, unsigned int), 
			"0123456789ABCDEF"));
	if (spec == '%')
		return (ft_putchar('%'));
	return (ft_putchar('%') + ft_putchar(spec));
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
