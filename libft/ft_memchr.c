/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:52:36 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:52:38 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//header

// memory search character
// scans initial n bytes of the memory area pointed to by
// s for the first instance of c. c and s are interpreted
// as unsigned char

void	*ft_memchr(const void *s; int c, size_t n)
{
	size_t			i;
	const unsigned char	*p;

	p = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] ==  (unsigned char)c)
			return ((void *)&p[i]);
		i++;
	}
	return (0);
}
