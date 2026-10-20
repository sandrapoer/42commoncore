/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:54:00 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:54:02 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	len;

	if (s1 == 0 && s2 == 0)
		return (0);
	if (*s1 == '\0')
		return (ft_strdup(s2));
	if (*s2 == '\0')
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	newstr = malloc(len);
	if (newstr == 0)
		return (0);
	ft_strlcpy(newstr, s1, len);
	ft_strlcat(newstr, s2, len);
	return (newstr);
}

/*
int main(void)
{
	#include <stdio.h>
	char *s1 = "Hello ";
	char *s2 = "World!";
	char *result = ft_strjoin(s1, s2);

	printf("%s%s\n", "Expected Hello World! --> ", result);
	free(result);
	return (0);
}
*/