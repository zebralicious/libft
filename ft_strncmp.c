/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 11:59:33 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/13 19:54:20 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *str1, const char *str2, int num)
{
	int i;

	i = 0;
	while (str1[i] == str2[i] && i < num)
	{
		if (str1[i + 1] == '\0' && str2[i + 1] == '\0')
			return (0);
		i++;
	}
	return (str1[i] - str2[i]);
}
