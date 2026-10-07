/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:54:29 by spoernba          #+#    #+#             */
/*   Updated: 2026/10/06 15:54:32 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(char const *s, char c)
{
	size_t		wordcount;
	size_t		i;

	wordcount = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			wordcount++;
		i++;
	}
	return (wordcount);
}

void free_split(char **result, size_t word_idx)
{
	while (word_idx > 0)
	{
		free(result[word_idx - 1]);
		word_idx--;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t 	i;
	size_t 	j;
	size_t 	word_idx;
	size_t 	start_idx;

	result = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (result == 0)
		return (0);
	i = 0;
	word_idx = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			start_idx = i;
			j = 0;
			while (s[start_idx + j] != c && s[start_idx + j] != '\0')
				j++;
			result[word_idx] = ft_substr(s, start_idx, j);
			if (result[word_idx] == 0)
			{
				free_split(result, word_idx);
				return (0);
			}
			word_idx++;
		}
		i++;
	}
	result[word_idx] = 0;
	return (result);
}

int main(void)
{
	char *s = "This is a     testsentence !";
	char c = ' ';
	int i = 0;
	char **result = ft_split(s, c);
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
