/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:54:42 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 17:57:26 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// string return-hypothetical-non-truncated-length copy
// copies the string pointed to by src, into a string at
// the buffer pointed to by dst
// if the string doesn't fit in the buffer, it is truncated
// guaranteed null-terminated

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t		i;
	size_t		srclen;

	i = 0;
	srclen = 0;
	if (dsize > 0)
	{
		while (src[i] != '\0' && i < dsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[srclen] != '\0')
		srclen++;
	return (srclen);
}

/*
int main(void)
{
	#include <stdio.h>
	const char *src = "Hello World!";
	size_t dsize = 5;
	char dest[dsize];

	printf("%s%ld\n", "Buffer size   --> ", dsize);
	printf("%s%ld\n", "Expected 12   --> ", ft_strlcpy(dest, src, dsize));
	printf("%s%s\n", "Expected Hell --> ", dest);
	return (0);
}
*/