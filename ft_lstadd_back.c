/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 19:39:04 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/27 20:01:47 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*clst;

	if(*lst)
	{
		clst = *lst;
		while (clst->next)
			clst = clst->next;
		clst->next = new;
	}
	else
		*lst = new;
}