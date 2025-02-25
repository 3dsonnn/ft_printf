/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 05:50:39 by efinda            #+#    #+#             */
/*   Updated: 2025/02/25 13:01:06 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, size_t *size)
{
	write(1, &c, 1);
	(*size)++;
}

void	print_no_type(t_printf *ptf)
{
}

void	print_char(t_printf *ptf, char c)
{
	if (!ptf->format.minus)
	{
		if (ptf->format.width && ptf->format.width > 1)
			put_space(ptf->format.width - 1, &ptf->size);
		if (ptf->format.zero && ptf->format.zero > 1)
			put_space(ptf->format.zero - 1, &ptf->size);
	}
	ft_putchar(c, &ptf->size);
	if (ptf->format.minus != -1 && ptf->format.minus > 1)
		put_space(ptf->format.minus - 1, &ptf->size);
}

void	print_str(t_printf *ptf, char *str, int i, int len)
{
	if (!str && ptf->format.dot && ptf->format.dot < 6)
	{
		str = "";
		len = 0;
	}
	else if (!str)
	{
		str = "(null)";
		len = 6;
	}
	if (ptf->format.dot && ptf->format.dot < ft_strlen(str))
		len = ptf->format.dot;
	if (!ptf->format.minus)
	{
		if (ptf->format.width && ptf->format.width > ft_strlen(str))
			put_space(ptf->format.width - len, &ptf->size);
		if (ptf->format.zero && ptf->format.zero > ft_strlen(str))
			put_space(ptf->format.zero - len, &ptf->size);
	}
	while (++i < len)
		ft_putchar(str[i], &ptf->size);
	if (ptf->format.minus != -1 && ptf->format.minus > ft_strlen(str))
		put_space(ptf->format.minus - len, &ptf->size);
}

void	print_addr(t_printf *ptf, void *ptr)
{
}

void	print_int(t_printf *ptf, int nbr)
{
}

void	print_uint(t_printf *ptf, unsigned int nbr)
{
}

void	print_hex(t_printf *ptf, unsigned int nbr, char *base)
{
}
