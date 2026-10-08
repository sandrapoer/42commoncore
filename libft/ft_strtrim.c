/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:54:55 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/06 15:54:59 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] && set[i] != c)
		i++;
	return (set[i] != '\0');
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;

	if (s1 == 0 || set == 0)
		return (0);
	first = 0;
	while (s1[first] && is_in_set(s1[first], set))
		first++;
	last = ft_strlen(s1);
	while (last > first && is_in_set(s1[last - 1], set))
		last--;
	return (ft_substr(s1, first, last - first));
}
