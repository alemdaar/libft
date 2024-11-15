/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelhasso <elhassounioussama2@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:52:13 by oelhasso          #+#    #+#             */
/*   Updated: 2024/11/14 17:44:03 by oelhasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	find_str(const char *str, const char *to_find, size_t len)
{
	size_t	i;

	i = 0;
	while (to_find[i] && str[i] == to_find[i] && len)
	{
		i++;
		len--;
	}
	if (!to_find[i])
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (len == 0 && !haystack)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (find_str(haystack, needle, len))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
