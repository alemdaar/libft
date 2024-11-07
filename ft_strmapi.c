/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelhasso <elhassounioussama2@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:52:06 by oelhasso          #+#    #+#             */
/*   Updated: 2024/11/07 15:39:06 by oelhasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
