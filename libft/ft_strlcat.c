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

# include <stdio.h>

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
	char dst[10] = "Hello";
	char src[10] = "World";
	size_t dsize = 10;

	ft_strlcat(dst, src, dsize);
	printf("%s\n", dst);
	return(0);
}
	*/