/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:11:26 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/09 20:11:26 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlen(char *str)
{
	int lenght;

	lenght = 0;
	while (*str != '/0')
		lenght++;
	return (lenght);
}