/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:54:13 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:54:15 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// string return-hypothetical-non-truncated-length catenate
// catenates the string pointed to by src, after the string
// pointed to by dst (overwriting its terminating null byte)
// if the string doesn't fit in the buffer, it is truncated
// guaranteed null-terminated
// src + dst must be null-terminated

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t		i;
	size_t		dstlen;
	size_t		srclen;

	i = 0;
	while (dst[i] != '\0' && i < dsize)
		i++;
	dstlen = i;
	i = 0;
	while (src[i] != '\0')
		i++;
	srclen = i;
	if (dstlen >= dsize)
		return (dsize + srclen);
	i = 0;
	while (src[i] != '\0' && dstlen + i < dsize - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/*
int main(void)
{
	#include <stdio.h>
	const char *src = "Hello World!";
	size_t dsize = 8;
	char dest[8] = "Hello";
	size_t result = ft_strlcat(dest, src, dsize);

	printf("%s%zu\n", "Buffer size      --> ", dsize);
	printf("%s%zu\n", "Expected 17      --> ", result);
	printf("%s%s\n", "Expected HelloHe --> ", dest);
	return (0);
}
*/