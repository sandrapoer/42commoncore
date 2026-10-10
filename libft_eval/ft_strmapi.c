/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:54:17 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/06 15:54:22 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new_str;

	if (s == 0)
		return (0);
	i = 0;
	new_str = malloc(ft_strlen(s) + 1);
	if (new_str == 0)
		return (0);
	while (s[i])
	{
		new_str[i] = f((unsigned int)i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
