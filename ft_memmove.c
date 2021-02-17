/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:52:24 by joaopedro         #+#    #+#             */
/*   Updated: 2021/02/15 19:49:28 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		temp[n];
	const char	*csrc;
	char		*cdest;

	i = 0;
	cdest = dest;
	csrc = src;
	while (i < n)
	{
		temp[i] = *csrc;
		i++;
		csrc++;
	}
	i = 0;
	while (i < n)
	{
		*cdest = temp[i];
		cdest++;
		i++;
	}
	return (dest);
}
