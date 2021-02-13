/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 11:19:38 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/10 11:19:38 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *src, const char *tofind, int slen)
{
	int i;
	int j;

	i = 0;
	if (!*tofind)
		return ((char *)src);

	while (src[i] != '\0' && i < slen)
	{
		j = 0;
		while (tofind[j] == src[i + j] && (i + j) < slen)
		{
			if (tofind[j + 1] == '\0')
				return ((char *)src + i);

			j++;
		}
		i++;
	}
	return (0);
}