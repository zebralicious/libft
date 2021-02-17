/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:11:14 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/17 19:14:22 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nwords(char *str, char c)
{
	int count;

	count = 0;
	while (*str)
	{
		if (*str == c)
			count++;
		str++;
	}
	return (count);
}

static int		ft_substrlen(char *str, char c)
{
	int len;

	len = 0;
	while (str[len] != '\0' && str[len] != c)
		len++;
	return (len);
}

static void		*mfree(char **split, int i)
{
	while (i > 0)
	{
		free(split[i]);
		i--;
	}
	free(split);
	return (split);
}

char			**ft_split(const char *s, char c)
{
	int		nwords;
	int		i;
	char	**split;

	i = 0;
	nwords = ft_nwords((char *)s, c);
	if (!(split = (char **)malloc((nwords + 1) * sizeof(char *))))
		return (NULL);
	while (nwords-- >= 0)
	{
		if (*s == c && *s != '\0')
			s++;
		split[i] = ft_substr((char *)s, 0, ft_substrlen((char *)s, c));
		if (!split[i])
			return (mfree(split, i));
		s = s + ft_substrlen((char *)s, c);
		i++;
	}
	return (split);
}
