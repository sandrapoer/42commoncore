/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:53:07 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:53:08 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//header

// Similar to memcpy, but memory areas may overlap

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t			i;

	d = (unsigned char*)dest;
	s = (const unsigned char*)src;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
	{
		i = 0;
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
