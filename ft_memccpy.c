/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:53:54 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/22 16:19:28 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	size_t		i;
	const char	*nsrc;
	char		*ndest;

	nsrc = src;
	ndest = dest;
	i = 0;
	while (i < size)
	{
		ndest[i] = nsrc[i];
		if (nsrc[i] == c)
		{
			ndest[i] = nsrc[i];
			return (dest + i + 1);
		}
		i++;
	}
	return (0);
}
