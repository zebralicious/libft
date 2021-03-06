/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:07:49 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/27 19:16:59 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t i;
	char *tmp;

	i = 0;
	tmp = (char *)str;
	while (tmp[i] && i < n)
	{
		tmp[i] = c;
		i++;
	}
	return (str);
}
