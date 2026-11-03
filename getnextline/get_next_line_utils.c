/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:52:29 by spoernba          #+#    #+#             */
/*   Updated: 2026/11/02 14:52:31 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// include stuff for size_T

char	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*ptr;

	total = nmemb * size;
	if (size != 0 && total / size != nmemb)
		return (0);
	if (total == 0)
		ptr = malloc(1);
	else
		ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

char	*ft_strchr(const char *s, int c)
{
	size_t		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	len;

	if (s1 == 0 && s2 == 0)
		return (0);
	if (*s1 == '\0')
		return (ft_strdup(s2));
	if (*s2 == '\0')
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	newstr = malloc(len);
	if (newstr == 0)
		return (0);
	ft_strlcpy(newstr, s1, len);
	ft_strlcat(newstr, s2, len);
	return (newstr);
}

har	*ft_strdup(const char *s)
{
	char	*new_str;
	size_t	i;

	new_str = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (new_str == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (s[c] != '\0')
		c++;
	return (c);
}

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