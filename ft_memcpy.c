/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:22:34 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/10 14:22:34 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t i;
	const char *nsrc;
	char *ndest;

	nsrc = src;
	ndest = dest;
	i = 0;
	if (!dest)
		return (0);
	while (i < size)
	{
		ndest[i] = nsrc[i];
		i++;
	}
	return (dest);
}