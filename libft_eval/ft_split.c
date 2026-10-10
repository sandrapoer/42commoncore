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

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	wordcount;
	size_t	i;

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

static void	free_split(char **result, size_t word_idx)
{
	while (word_idx > 0)
	{
		free(result[word_idx - 1]);
		word_idx--;
	}
	free(result);
}

static size_t	word_len(char const *s, char c, size_t start_idx)
{
	size_t	j;

	j = 0;
	while (s[start_idx + j] != c && s[start_idx + j] != '\0')
		j++;
	return (j);
}

static char	**fill_words(char **result, char const *s, char c)
{
	size_t	i;
	size_t	word_idx;

	i = 0;
	word_idx = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			result[word_idx] = ft_substr(s, i, word_len(s, c, i));
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

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (s == 0)
		return (0);
	result = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (result == 0)
		return (0);
	return (fill_words(result, s, c));
}
