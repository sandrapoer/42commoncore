/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:53:07 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 17:53:17 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Similar to memcpy, but memory areas may overlap

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char*)dest;
	s = (const unsigned char*)src;
	if (d == s || n == 0)
		return (dest);
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}

#include <string.h>
int main(void)
{
	char	dest[10] = "Hello";
	char	src[10] = "World";
	size_t	n = 3;

	printf("%s\n", (char*)memmove(dest, src, n));
	printf("%s\n", (char *)ft_memmove(dest, src, n));
	return(0);
}