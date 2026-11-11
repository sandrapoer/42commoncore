/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 09:37:17 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/27 09:37:18 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	i;

	if (!str)
		str = "(null)";
	i = 0;
	while (str[i])
	{
		if (ft_putchar(str[i] < 0))
			return (-1);
		i++;
	}
	return (i);
}

int	ft_print_hex(unsigned long n, char *base)
{
	int	count;
	int ret;

	count = 0;
	if (n >= 16)
	{
		ret = ft_print_hex(n / 16, base);
		if (ret < 0)
			return (-1);
		count += ret;
	}
	ret = ft_putchar(base[n % 16]);
	if (ret < 0)
		return (-1);
	return (count + ret);
}

int	ft_print_ptr(void *ptr)
{
	int	count;
	int	ret;

	if (!ptr)
		return (ft_print_str("(nil)"));
	count = ft_print_str("0x");
	if (count < 0)
		return (-1);
	ret = ft_print_hex((unsigned long)ptr, "0123456789abcdef");
	if (ret < 0)
		return (-1);
	return (count + ret);
}

int	ft_print_unsigned(unsigned int n)
{
	int	count;
	int	ret;

	count = 0;
	if (n >= 10)
	{
		ret = ft_print_unsigned(n / 10);
		if (ret < 0)
			return (-1);
		count += ret;
	}
	ret = ft_putchar(n % 10 + '0');
	if (ret < 0)
		return (-1);
	return (count + ret);
}

int	ft_print_nbr(int n)
{
	long	nbr;
	int		count;
	int		ret;

	nbr = n;
	count = 0;
	if (nbr < 0)
	{
		if (ft_putchar('-') < 0)
			return (-1);
		count++;
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ret = ft_print_nbr(nbr / 10);
		if (ret < 0)
			return (-1);
		count += ret;
	}
	ret = ft_putchar(nbr % 10 + '0');
	if (ret < 0)
		return (-1);
	return (count + ret);
}
