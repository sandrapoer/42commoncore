/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:55:19 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:55:22 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//header

// string scanning operation
// finds last occurrence of c in the string pointed to by s. The
// termination NUL character is considered part of the string

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	size_t		len;

	i = 0;
	while (s[i] != '\0')
		i++;
	len = i;
	if ((char)c) == '\0'
		return ((char *)&s[len]);
	while (i > 0)
	{
		i--;
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	}
	return (0);
}
