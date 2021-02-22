/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 23:55:40 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/22 18:16:48 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(const char *s1, const char *set)
{
	int i;
	int j;
	int len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i]  && is_set(s1[i], set) == 1)
		i++;
	j = ft_strlen(s1);
	if (i == j)
		len = 0;
	else
	{
		while (j != i && (is_set(s1[j - 1], set) == 1))
			j--;
		len = j - i;
	}

	return (ft_substr(s1, i, len));
}
