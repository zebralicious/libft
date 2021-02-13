/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:29:25 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/10 13:29:25 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, const char *src, size_t size);
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && (j + i + 1) < size)
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (i + ft_strlen(src));
}