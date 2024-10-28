/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelhasso <elhassounioussama2@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:10:23 by oelhasso          #+#    #+#             */
/*   Updated: 2024/10/27 10:49:48 by oelhasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*p;

	p = ptr;
	while (n--)
		*p++ = x;
	return (ptr);
}

/*int main()
{
	char str[] = "123456";
	printf("'%s'\n", str);
	ft_memset(str, 'x', 3);
	printf("'%s'\n", str);
}*/
