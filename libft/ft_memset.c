/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:53:15 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:53:17 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//header
// The memset() function fills the first n bytes of the memory area
// pointed to by a with the constant byte c.
// void* is unknown type --> cannot be indexed
// p holds same address as a but as unsigned char * --> can be indexed

void	ft_memset(void *a, int c, size_t n)
{
	unsigned char	*p;
	size_t		i;

	p = (unsigned char *)a;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (a);
}
