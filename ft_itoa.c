/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 00:44:26 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/17 19:15:43 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_checklenght(int n)
{
	int		count;

	count = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = n * -1;
		count++;
		ft_checklenght(n);
	}
	if (n > 9)
	{
		count = count + ft_checklenght(n / 10);
	}
	return (count);
}

char			*ft_itoa(int n)
{
	char	*number;
	int		i;
	int		flag;
	long	ncopy;

	flag = 0;
	ncopy = n;
	i = ft_checklenght(n);
	if (!(number = (char *)malloc(sizeof(char) * i)))
		return (NULL);
	number[ft_checklenght(n)] = '\0';
	if (ncopy < 0)
	{
		number[0] = '-';
		ncopy = ncopy * -1;
		flag = 1;
	}
	while (i-- > flag)
	{
		number[i] = (ncopy % 10) + '0';
		ncopy = ncopy / 10;
	}
	return (number);
}
