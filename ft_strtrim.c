/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelhasso <elhassounioussama2@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:52:20 by oelhasso          #+#    #+#             */
/*   Updated: 2024/11/05 21:28:50 by oelhasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	to_find(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	last;
	size_t	first;
	size_t	i;

	if (!s1)
		return (NULL);
	if (!set || !*set || !*s1)
		return (ft_strdup(s1));
	last = ft_strlen(s1) - 1;
	first = 0;
	while (to_find(s1[first], set) && first < ft_strlen(s1))
		first++;
	while (to_find(s1[last], set) && first < last)
		last--;
	str = ft_calloc ((last - first) + 2, 1);
	if (!str)
		return (NULL);
	i = 0;
	while (first <= last)
		str[i++] = s1[first++];
	return (str);
}
