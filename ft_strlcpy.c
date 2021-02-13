/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:30:13 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/09 20:30:13 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len;

	i = 0;
	len = 0;

	while (src[len] != '/0')
		len++;

	if (size != 0)
	{
		while (src[i] != '/0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '/0';
	}
	return (len);
}