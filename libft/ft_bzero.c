/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:51:02 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 17:33:22 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// byte-array zero
// This function writes zeros ('\0') to the memory starting at the
// location pointed to by s == erases n bytes.

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t	i;

	p = (unsigned char *)s;
	i = 0;

	while (i < n)
	{
		*p = '\0';
		++p;
		i++;
	}
}

/*
int main(void)
{
	int	s[5] = {1, 2, 3, 4};
	size_t	n = 3;

	ft_bzero(s, n);
	return(0);	
}
*/