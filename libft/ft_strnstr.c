/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:55:12 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:55:13 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//header

// locates first occurrence of the null-terminated string little
// in the string big, where not more than len characters are 
// searched.

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (little[i] == '\0')
		return ((char*)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (littel[j] != '\0' && big[i + j] == little[j] && i + j < len)
			j++;
		if (little[j] == '\0')
			return ((char*)&big[i])
		i++;
	}
	return (0);
}
