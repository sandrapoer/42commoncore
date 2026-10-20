/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:55:04 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/06 15:55:07 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = -1;
	while (s[++i])
		f((unsigned int)i, &s[i]);
}

/*
void test_toupper(unsigned int i, char *c)
{
	(void)i;
	*c = (char)ft_toupper(*c);
}

int main(void)
{
	#include <stdio.h>
	char s[] = "Hello World!";
	ft_striteri(s, test_toupper);

	printf("%s%s\n", "Expected HELLO WORLD! --> ", s);
	return (0);
}
*/