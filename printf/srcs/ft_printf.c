/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaperei <joaperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:51:19 by joaperei          #+#    #+#             */
/*   Updated: 2021/06/23 17:42:44 by joaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

t_print	*ft_initialise_tab(t_print *tab)
{
	tab->wdt = 0;
	tab->prc = 0;
	tab->zero = 0;
	tab->pnt = 0;
	tab->sign = 0;
	tab->tl = 0;
	tab->is_zero = 0;
	tab->dash = 0;
	tab->perc = 0;
	tab->sp = 0;
	return (tab);
}

int ft_eval_variable(t_print *tab, const char *format, int i)
{
	if (format[i] == 'c')
		ft_output_char(tab);
	else if (format[i] == 's')
		ft_output_string(tab);
	else if (format[i] == 'd' || format[i] == 'i')
		ft_output_int(tab);
	else if (format[i] == 'u')
		ft_output_unsigned_int(tab);
	else if (format[i] == 'p')
		ft_output_pointer(tab);
	else if (format[i] == 'x' || format[i] == 'X')
		ft_output_hexa_int(tab, format[i] - 23);
	else if (format[i] == '%')
		ft_percentage(tab);
	return (i);
}

int ft_eval_format (t_print *tab, const char *format, int pos)
{
	while (!(ft_isalpha(format[pos]) || format[pos] == '%'))
	{
		if (format[pos] == ' ')
			pos = ft_space(tab, pos);
		if (format[pos] == '0')
			pos = ft_eval_zero(tab, format, pos);
		if (format[pos] == '*')
			pos = ft_eval_star(tab, format, pos);
		if (format[pos] == '-')
			pos = ft_eval_dash(tab, format, pos);
		if (format[pos] == '.')
			pos = ft_eval_precision(tab, format, pos);
		if (ft_isdigit(format[pos]))
			pos = ft_eval_width(tab, format, pos);
	}
	ft_eval_variable(tab, format, pos);
	ft_reset_tab(tab);
	return (pos);
}

int	ft_printf(const char *format, ...)
{
	t_print	*tab;
	int i;
	int ret;

	if (!format)
		return(0);
	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	ft_initialise_tab(tab);
	va_start(tab->args, format);
	i = -1;
	ret = 0;
	while (format[++i])
	{
		if (format[i] == '%')
			i = ft_eval_format(tab, format, i + 1);
		else
			ret += write(1, &format[i], 1);
	}
	va_end(tab->args);
	ret += tab->tl;
	free (tab);
	return (ret);
}