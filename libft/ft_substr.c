/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:55:56 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:55:57 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//header

//Allocates memory (using malloc(3)) and returns a
// substring from the string ’s’.
// The substring starts at index ’start’ and has a
// maximum length of ’len’.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t 	len;

	if (start >= ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = malloc(len + 1);
	if (substr == 0)
		return (0);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
