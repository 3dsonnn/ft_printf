/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:45:16 by efinda            #+#    #+#             */
/*   Updated: 2025/02/26 19:49:17 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static inline void	handle_conflicts(t_printf *ptf)
{
	if (ptf->format.minus)
		ptf->format.zero = 0;
	if (ptf->format.plus)
		ptf->format.space = 0;
	// if ((ptf->format.type == 'd' || ptf->format.type == 'i'))
	// {
	// 	if (ptf->format.dot)
	// 	{
	// 		ptf->format.zero = 0;
	// 		ptf->format.minus = 0;
	// 	}
	// }
}

static  void    negative(t_printf *ptf)
{

}

static  void    positive(t_printf *ptf)
{
    
}

void	print_int(t_printf *ptf, int n)
{
	t_nbr   nbr;

	ptf->aux.s = ft_itoa(nbr);
	if (!ptf->aux.s)
		return ;
	ptf->aux.len = ft_strlen(ptf->aux.s);
	if (*ptf->aux.s == '-')
		ptf->aux.neg = 1;
	if (ptf->format.plus)
	{
		if (ptf->aux.neg)
			ft_putchar('-', 1, &ptf->size);
		else
			ft_putchar('+', 1, &ptf->size);
	}
	if (ptf->format.space)
		if (!ptf->aux.neg)
			ft_putchar(' ', 1, &ptf->size);
	if (ptf->format.zero && ptf->format.zero > ptf->aux.len)
		ft_putchar('0', ptf->format.zero - ptf->aux.len, &ptf->size);
	if (ptf->format.dot)
		if ((ptf->aux.neg && (ptf->format.dot > ptf->aux.len - 1))
			|| (!ptf->aux.neg && (ptf->format.dot > ptf->aux.len)))
			ft_putchar('0', ptf->format.dot - ptf->aux.len - ptf->aux.neg,
				&ptf->size);
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
