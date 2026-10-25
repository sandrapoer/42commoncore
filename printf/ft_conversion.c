#include "ft_printf.h"
/*
\n --> newline
\t --> tab
\\ --> backslash
\" --> double quote
\' --> single quote
*/

int	ft_conversion(char *specifier, va_list *arg)
{
	if (spec == 'c')
		return (ft_putchar(va_arg(*args. int)));
	if (spec == 's')
		return (ft_print_str(va_arg(*args, char *)));
	if (spec == 'p')
		return (ft_print_ptr(va_arg(*args, void *)));
	if (spec == 'd' || spec == 'i')
		return (ft_print_nbr(va_arg(*args, int)));
	if (spec == 'u')
		return (ft_print_unsigned(va_arg(*args, unsigned int)));
	if (spec == 'x')
		return (ft_print_hex(va_arg(*args, unsigned int), "0123456789abcdef"));
	if (spec == 'X')
		return (ft_print_hex(va_arg(*args, unsigned int), "0123456789ABCDEF"));
	if (spec == '%')
		return (ft_putchar('%'));
	return (ft_putchar('%') + ft_putchar(spec)); //nr of chars
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int ft_print_str(char *str)
{
	int	i;

	if (!str)
		str == "(null)";
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

int ft_print_hex(unsigned long n, char *base)

int ft_print_ptr(void *ptr)

int ft_print_unsigned(unsigned int n)

int ft_print_nbr(int n)