/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelhasso <elhassounioussama2@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:52:17 by oelhasso          #+#    #+#             */
/*   Updated: 2024/10/31 15:16:47 by oelhasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*last;
	int		r;

	r = 0;
	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
		{
			r = 1;
			last = str;
		}
		str++;
	}
	if (r == 1)
		return (last);
	if ((char)c == 0)
		return (str);
	return (NULL);
}
