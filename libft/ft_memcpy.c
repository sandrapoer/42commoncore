/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:52:53 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 17:42:26 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The memcpy() function copies n bytes from memory area src to
// memory area dest. The memory areas must not overlap. Use
// memmove(3) if the memory areas do overlap.

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t			i;

	d = (unsigned char*)dest;
	s = (const unsigned char*)src;
	i = -1;
	while (++i < n)
		d[i] = s[i];
	return (dest);
}

int main(void)
{
	char dest[10] = "hello";
	char src[10] = "world";
	size_t n = 2;
	printf("%s", (char*)ft_memcpy(dest, src, n));
	return(0);
}