/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:11:14 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/22 19:05:18 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nwords(char *str, char c)
{
	int count;
	int flag;

	count = 0;
	flag = 1;
	while (*str)
	{
		if (*str == c)
			flag = 1;
		else if (flag == 1)
		{
			flag = 0;
			count++;
		}
		str++;
	}
	return (count);
}

static int		ft_substrlen(char *str, char c, int i)
{
	int len;

	len = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		i++;
		len++;
	}
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
	int		j;
	char	**split;

	i = 0;
	j = 0;
	nwords = ft_nwords((char *)s, c);
	if (!(split = (char **)malloc((nwords + 1) * sizeof(char *))))
		return (NULL);




	while (i < nwords && s[j] != '\0')
	{
		while (s[j] == c)
			j++;
		split[i] = ft_substr((char *)s, j, ft_substrlen((char *)s, c, j));
		if (!split[i])
			return (mfree(split, i));
		while (s[j] != c)
			j++;
		//s = s + ft_substrlen((char *)s, c, j);
		i++;
	}
	split[i] = NULL;
	return (split);
}
