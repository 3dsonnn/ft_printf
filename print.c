/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 05:50:39 by efinda            #+#    #+#             */
/*   Updated: 2025/02/25 17:38:45 by efinda           ###   ########.fr       */
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
			put_char_loop(' ', ptf->format.width - 1, &ptf->size);
		if (ptf->format.zero && ptf->format.zero > 1)
			put_char_loop(' ', ptf->format.zero - 1, &ptf->size);
	}
	ft_putchar(c, &ptf->size);
	if (ptf->format.minus != -1 && ptf->format.minus > 1)
		put_char_loop(' ', ptf->format.minus - 1, &ptf->size);
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
			put_char_loop(' ', ptf->format.width - len, &ptf->size);
		if (ptf->format.zero && ptf->format.zero > ft_strlen(str))
			put_char_loop(' ', ptf->format.zero - len, &ptf->size);
	}
	while (++i < len)
		ft_putchar(str[i], &ptf->size);
	if (ptf->format.minus != -1 && ptf->format.minus > ft_strlen(str))
		put_char_loop(' ', ptf->format.minus - len, &ptf->size);
}

void	print_addr(t_printf *ptf, void *ptr)
{
}

void	print_int(t_printf *ptf, int nbr, char *strnbr)
{
	int	len;

	if (nbr < 0)
		len = ft_nbrlen(nbr) - 1;
	else
		len = ft_nbrlen(nbr);
	strnbr = ft_itoa(nbr);
	if (!strnbr)
		return ;
	if (ptf->format.dot && ptf->format.dot > len)
		put_char_loop('0', ptf->format.dot - len, &ptf->size);
	if (ptf->format.width && ptf->format.width > ft_nbrlen(nbr))
		put_char_loop(' ', ptf->format.width - ft_nbrlen(nbr), &ptf->size);
	if (ptf->format.width && ptf->format.width > ft_nbrlen(nbr))
		put_char_loop('0', ptf->format.width - ft_nbrlen(nbr), &ptf->size);
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
