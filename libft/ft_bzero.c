/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:51:02 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:51:06 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//header
// byte-array zero
// This function writes zeros ('\0') to the memory starting at the
// location pointed to by a.

void	ft_bzero(void *a, size_t n)
{
	unsigned char *p;
	unsigned int	i;

	p = (unsigned char *)a;
	i = 0;

	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
	return (a);
}
