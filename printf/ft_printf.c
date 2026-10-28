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

/*
Upon successful return, printf returns the number of bytes
printed (excluding the null byte used to end output to strings).
On error, a negative value is returned.
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

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

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
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}

/*
int main(void)
{
	#include <stdio.h>

	int num = 42;

	printf("%s\n\n", "Printf does this:");
	printf()
	printf("%s\n%c\n%d\n%u\n%x\n%X\n%p\n%%\n\n\n", 
	"Hello", 'A', -42, 300, 30, 30, (void*)&num);
	ft_printf("%s\n\n", "My Printf does this:");
	ft_printf("%s\n%c\n%d\n%u\n%x\n%X\n%p\n%%\n\n", 
	"Hello", 'A', -42, 300, 30, 30, (void*)&num);
	return (0);
}
*/