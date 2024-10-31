/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelhasso <elhassounioussama2@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:49:40 by oelhasso          #+#    #+#             */
/*   Updated: 2024/10/31 10:59:16 by oelhasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;

	if (dst == src)
		return (dst);
	if (src > dst)
		return (ft_memcpy(dst, src, n));
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	while (n--)
		dest[n] = source[n];
	return (dst);
}
