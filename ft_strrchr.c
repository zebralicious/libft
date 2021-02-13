/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 11:03:19 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/13 19:52:56 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_srtchr(const char *str, int c)
{
	char *ret;

	ret = 0;
	while (*str)
	{
		if (*str == (char)c)
			ret = (char *)str;
		str++;
	}
	return (ret);
}
