/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 05:50:39 by efinda            #+#    #+#             */
/*   Updated: 2025/02/25 20:15:56 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, size_t amount, size_t *size)
{
	while (amount)
	{
		write(1, &c, 1);
		(*size)++;
		amount--;
	}
}

void	print_no_type(t_printf *ptf)
{
}

void	print_char(t_printf *ptf, char c)
{
	if (!ptf->format.minus)
	{
		if (ptf->format.width && ptf->format.width > 1)
			ft_putchar(' ', ptf->format.width - 1, &ptf->size);
		if (ptf->format.zero && ptf->format.zero > 1)
			ft_putchar(' ', ptf->format.zero - 1, &ptf->size);
	}
	ft_putchar(c, 1, &ptf->size);
	if (ptf->format.minus != -1 && ptf->format.minus > 1)
		ft_putchar(' ', ptf->format.minus - 1, &ptf->size);
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
			ft_putchar(' ', ptf->format.width - len, &ptf->size);
		if (ptf->format.zero && ptf->format.zero > ft_strlen(str))
			ft_putchar(' ', ptf->format.zero - len, &ptf->size);
	}
	while (++i < len)
		ft_putchar(str[i], 1, &ptf->size);
	if (ptf->format.minus != -1 && ptf->format.minus > ft_strlen(str))
		ft_putchar(' ', ptf->format.minus - len, &ptf->size);
}

void	print_addr(t_printf *ptf, void *ptr)
{
}

void	print_int(t_printf *ptf, int nbr)
{
	ptf->aux.s = ft_itoa(nbr);
	if (!ptf->aux.s)
		return ;
	ptf->aux.len = ft_strlen(ptf->aux.s);
	if (*ptf->aux.s == '-')
		ptf->aux.neg = 1;
	if (ptf->format.dot)
	{
		if ((ptf->aux.neg && (ptf->format.dot > ptf->aux.len - 1))
			|| (!ptf->aux.neg && (ptf->format.dot > ptf->aux.len)))
			ft_putchar('0', ptf->format.dot - ptf->aux.len - ptf->aux.neg,
				&ptf->size);
	}
	if (ptf->format.width && ptf->format.width > ft_nbrlen(nbr))
	{
		if ((ptf->aux.neg && (ptf->format.dot > ptf->aux.len - 1))
			|| (!ptf->aux.neg && (ptf->format.dot > ptf->aux.len)))
			ft_putchar('0', ptf->format.dot - ptf->aux.len - ptf->aux.neg,
				&ptf->size);
		ft_putchar(' ', ptf->format.width - ft_nbrlen(nbr), &ptf->size);
	}
	if (ptf->format.width && ptf->format.width > ft_nbrlen(nbr))
		ft_putchar('0', ptf->format.width - ft_nbrlen(nbr), &ptf->size);
	if (ptf->format.space && nbr > 0)
		ft_putchar(' ', &ptf->size);
	if (ptf->format.plus && nbr > 0)
		ft_putchar(' ', &ptf->size);
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

void	print_uint(t_printf *ptf, unsigned int nbr)
{
}

void	print_hex(t_printf *ptf, unsigned int nbr, char *base)
{
}
