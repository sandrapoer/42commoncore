/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:55:03 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/01 15:55:04 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compares the first at most n bytes of s1 and s2

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>
int main(void)
{
	char*	ex1 = "Hello";
	char*	ex2 = "hello";
	unsigned int n = 3;

	printf("%d\n", ft_strncmp(ex1, ex2, n));
	return(0);	
}