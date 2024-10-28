/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelhasso <elhassounioussama2@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:52:33 by oelhasso          #+#    #+#             */
/*   Updated: 2024/10/27 19:49:15 by oelhasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t 	count_words(char const *str, char c)
{
	int 	i = 0;
	int 	r = 1;
	size_t	word;
	if()
	{
		
	}
	while (str[i])
	{
		if(str[i] == c && r = 1)
			word++;
			r = 0;
		if(str[i] != c && r = 0)
			r = 1;
		i++;
	}
	
}

char **ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	k = 0;
	split = (char **) malloc (count_words(str));
	if (!split)
		return (NULL);
	while (str[i] == 32 || str[i] == 9 || str[i] == 10)
		i += 1;
	while (str[i])
	{
		j = 0;
		if (!(split[k] = (char *)malloc(sizr)))
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
}
