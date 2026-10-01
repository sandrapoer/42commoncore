/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:54:42 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:54:44 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// header

// string return-hypothetical-non-truncated-length copy
// copies the string pointed to by src, into a string at 
// the buffer pointed to by dst
// if the string doesn't fit in the buffer, it is truncated

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
	return(srclen);
}
