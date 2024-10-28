/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelhasso <elhassounioussama2@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:52:48 by oelhasso          #+#    #+#             */
/*   Updated: 2024/10/27 13:13:44 by oelhasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	char		*dest;
	const char	*src;

	if (!dest_str || !src_str || dest_str == src_str)
		return (dest_str);
	dest = (char *)dest_str;
	src = (const char *)src_str;
	while (n--)
		*dest++ = *src++;
	return (dest_str);
}
