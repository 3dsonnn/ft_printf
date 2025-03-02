/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:45:16 by efinda            #+#    #+#             */
/*   Updated: 2025/03/02 02:08:42 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	apply_flags(t_printf *ptf, t_nbr *nbr, unsigned int n)
{
	if (ptf->format.minus)
		ptf->format.zero = 0;
	if (ptf->format.dot == 0 && *nbr->str == '0')
	{
		ft_strfree(&nbr->str);
		nbr->str = ft_strdup("");
	}
	if (ptf->format.dot != -1 && ptf->format.dot > nbr->len)
		apply_precision(nbr, ptf->format.dot);
	if (nbr->id == 'i')
		apply_sign(ptf, nbr);
	if (nbr->id == 'x' || nbr->id == 'X')
		apply_hash(ptf, nbr, n);
	if (ptf->format.width != -1 && ptf->format.width > nbr->len)
	{
		if (ptf->format.dot != -1 || !ptf->format.zero)
			apply_width(ptf, nbr, ptf->format.width, ' ');
		else
			apply_width(ptf, nbr, ptf->format.width, '0');
	}
}

void	print_int(t_printf *ptf, int n)
{
	t_nbr	nbr;

	nbr = (t_nbr){.str = NULL, .tmp = NULL, .len = 0, .neg = 0, .id = 'i'};
	if (init_nbr(&nbr, (t_integer){.i = n}))
		return ;
	if ((ptf->format.dot || ptf->format.minus || ptf->format.plus
			|| ptf->format.space || ptf->format.width || ptf->format.zero))
		apply_flags(ptf, &nbr, 0);
	else if (n < 0)
		ft_putchar('-', 1, &ptf->size);
	ft_putstr(nbr.str, -1, &ptf->size);
	ft_strfree(&nbr.str);
}

void	print_uint(t_printf *ptf, unsigned int n)
{
	t_nbr	nbr;

	nbr = (t_nbr){.str = NULL, .tmp = NULL, .len = 0, .neg = 0, .id = 'u'};
	if (init_nbr(&nbr, (t_integer){.ui = n}))
		return ;
	if ((ptf->format.dot || ptf->format.minus || ptf->format.width
			|| ptf->format.zero))
		apply_flags(ptf, &nbr, 0);
	ft_putstr(nbr.str, -1, &ptf->size);
	ft_strfree(&nbr.str);
}

void	print_hex(t_printf *ptf, unsigned int n, char id)
{
    t_nbr	nbr;

	nbr = (t_nbr){.str = NULL, .tmp = NULL, .len = 0, .neg = 0, .id = id};
	if (init_nbr(&nbr, (t_integer){.ui = n}))
		return ;
	if ((ptf->format.dot || ptf->format.minus || ptf->format.width
			|| ptf->format.zero || ptf->format.hash))
		apply_flags(ptf, &nbr, n);
	ft_putstr(nbr.str, -1, &ptf->size);
	ft_strfree(&nbr.str);
}
