/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 20:26:33 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/28 16:02:30 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (del)(void *))
{
    t_list *temp;

    temp = *lst;
    if (temp->next)
	{
		temp = temp->next;
        ft_lstclear(temp, del);
	}
	else
        del(temp->content);
        free(temp);
        *lst = NULL;
}