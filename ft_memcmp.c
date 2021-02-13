/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 20:30:09 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/12 20:41:42 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (*(char *)str1 && *(char *)str2 && (*(char *)str1 == *(char *)str2)
		&& i <= n)
	{
		str1++;
		str2++;
		i++;
	}
	return (*(char *)str1 - *(char *)str2);
}
