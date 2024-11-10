/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelhasso <elhassounioussama2@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:40:26 by oelhasso          #+#    #+#             */
/*   Updated: 2024/11/10 15:01:19 by oelhasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new == NULL || lst == NULL)
        return;
    new->next = *lst;
    *lst = new;
}
int main()
{
    int con = 10;
    t_list *new = ft_lstnew(&con);
    ft_lstadd_front(NULL, new);
}