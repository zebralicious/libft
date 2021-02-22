/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 20:42:13 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/22 17:38:02 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	if (!s || !(sub = (char*)malloc(len + 1)))
		return (NULL);
	if (start < ft_strlen(s))
		while (s[start + i] && len--)
		{
			sub[i] = s[start + i];
			i++;
		}
	sub[i] = 0;
	return (sub);
}
