/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:14:05 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/15 21:13:54 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *dest;

	dest = malloc(ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	while (*s != '\0')
	{
		*dest = *s;
		dest++;
		s++;
	}
	*dest = '\0';
	return (dest);
}
