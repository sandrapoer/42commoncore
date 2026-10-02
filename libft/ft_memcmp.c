/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:52:44 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:52:46 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compares the first n bytes of memory areas s1 and s2

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;

	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

int main(void)
{
	char*	ex1 = "Hello";
	char*	ex2 = "hello";
	size_t n = 3;

	printf("%d\n", ft_memcmp(ex1, ex2, n));
	return(0);	
}
