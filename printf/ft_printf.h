/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:18:42 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/22 15:18:45 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_conversion(char spec, va_list *args);
int ft_putchar(char c);
int ft_print_str(char *str);
int ft_print_ptr(void *ptr);
int ft_print_hex(unsigned long n, char *base);
int ft_print_nbr(int n);
int ft_print_unsigned(unsigned int n);

#endif