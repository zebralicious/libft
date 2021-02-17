/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 23:55:40 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/17 19:16:31 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
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

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] != '\0' && is_set(s1[i], set) == 1)
		i++;
	j = ft_strlen(s1) - 1;
	while (j != i && is_set(s1[j], set) == 1)
		j--;
	return (ft_substr(s1, i, j - i + 1));
}
