/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelhasso <elhassounioussama2@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:52:33 by oelhasso          #+#    #+#             */
/*   Updated: 2024/11/06 22:14:09 by oelhasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **strs, size_t count)
{
	while (count > 0)
		free(strs[count--]);
	free(strs);
	return (NULL);
}

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;
	int		in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	*allocate_word(const char *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static char	**ft_split_helper(const char *s, char **strings, char c)
{
	size_t	i;
	size_t	k;
	size_t	start;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			strings[k] = allocate_word(s, start, i);
			if (!strings[k])
				return (ft_free(strings, k));
			k++;
		}
	}
	strings[k] = NULL;
	return (strings);
}

char	**ft_split(const char *s, char c)
{
	char	**strings;

	if (!s)
		return (NULL);
	strings = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	return (ft_split_helper(s, strings, c));
}
