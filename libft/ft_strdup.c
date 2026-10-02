/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:53:30 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:53:36 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// use malloc()

// The strdup() function returns a pointer to a new string which is a
// duplicate of the string s.  Memory for the new string is obtained
// with malloc(3), and can be freed with free(3).

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*new_str;
	size_t	i;

	new_str = malloc(ft_strlen(s) * sizeof(char) +1);
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

#include <stdio.h>
int main(void)
{
	char*	ex1 = "Hello, World!";
	char*	ex2 = "";

	printf("%s\n", ft_strdup(ex1));
	printf("%s\n", ft_strdup(ex2));
	free(ft_strdup(ex1));
	free(ft_strdup(ex2));
	return(0);
}