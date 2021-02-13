/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:22:23 by joaperei          #+#    #+#             */
/*   Updated: 2021/02/10 13:22:23 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return(c);
}