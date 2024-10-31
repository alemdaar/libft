/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelhasso <elhassounioussama2@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:52:33 by oelhasso          #+#    #+#             */
/*   Updated: 2024/10/29 19:07:18 by oelhasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*size_t	count_words(char const *str, char c)
{
	int		i;
	int		r;
	size_t	word;

	i = 0;
	r = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] == c && r == 1)
		{
			word++;
			r = 0;
		}
		if (str[i] != c && r == 0)
			r = 1;
		i++;
	}
	if (!str[i] && str[i - 1] != c)
		word++;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**split;
	int		j;
	int		k;

	i = 0;
	split = (char **) malloc (count_words(s, c));
	if (!split)
		return (NULL);
	while (str[i] == 32 || str[i] == 9 || str[i] == 10)
		i++;
	k = 0;
	while (str[i])
	{
		j = 0;
		split[k] = (char *)malloc(ft_strlen(s));
		if (!split[k])
			return (NULL);
		while (str[i] != 32 && str[i] != 9 && str[i] != 10 && str[i])
			split[k][j++] = str[i++];
		while (str[i] == 32 || str[i] == 9 || str[i] == 10)
			i += 1;
		split[k][j] = '\0';
		k += 1;
	}
	split[k] = NULL;
	return (split);
}*/