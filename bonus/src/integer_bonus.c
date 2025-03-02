/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:45:16 by efinda            #+#    #+#             */
/*   Updated: 2025/03/02 19:16:06 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf_bonus.h"

static void	apply_flags(t_printf *ptf, t_nbr *nbr, unsigned int n,
		unsigned long long a)
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
	if (nbr->id == 'a' || nbr->id == 'x' || nbr->id == 'X')
		apply_hash(ptf, nbr, n, a);
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
	t_nbr		nbr;
	t_integer	un;

	un.i = n;
	nbr = (t_nbr){.str = NULL, .tmp = NULL, .len = 0, .neg = 0, .id = 'i'};
	if (init_nbr(&nbr, un))
		return ;
	if ((ptf->format.dot || ptf->format.minus || ptf->format.plus
			|| ptf->format.space || ptf->format.width || ptf->format.zero))
		apply_flags(ptf, &nbr, 0, 0);
	else if (n < 0)
		ft_putchar('-', 1, &ptf->size);
	printf("-->%s\n", nbr.str);
	ft_putstr(nbr.str, -1, &ptf->size);
	ft_strfree(&nbr.str);
}

void	print_uint(t_printf *ptf, unsigned int n)
{
	t_nbr		nbr;
	t_integer	un;

	un.ui = n;
	nbr = (t_nbr){.str = NULL, .tmp = NULL, .len = 0, .neg = 0, .id = 'u'};
	if (init_nbr(&nbr, un))
		return ;
	if ((ptf->format.dot || ptf->format.minus || ptf->format.width
			|| ptf->format.zero))
		apply_flags(ptf, &nbr, 0, 0);
	ft_putstr(nbr.str, -1, &ptf->size);
	ft_strfree(&nbr.str);
}

void	print_hex(t_printf *ptf, unsigned int n, char id)
{
	t_nbr		nbr;
	t_integer	un;

	un.ui = n;
	nbr = (t_nbr){.str = NULL, .tmp = NULL, .len = 0, .neg = 0, .id = id};
	if (init_nbr(&nbr, un))
		return ;
	if ((ptf->format.dot || ptf->format.minus || ptf->format.width
			|| ptf->format.zero || ptf->format.hash))
		apply_flags(ptf, &nbr, n, 0);
	ft_putstr(nbr.str, -1, &ptf->size);
	ft_strfree(&nbr.str);
}

void	print_addr(t_printf *ptf, void *ptr)
{
	t_nbr		nbr;
	t_integer	un;

	if (!ptr)
	{
		ft_putstr("(nil)", -1, &ptf->size);
		return ;
	}
	un.a = (unsigned long long)ptr;
	nbr = (t_nbr){.str = NULL, .tmp = NULL, .len = 0, .neg = 0, .id = 'a'};
	if (init_nbr(&nbr, un))
		return ;
	if ((ptf->format.dot || ptf->format.minus || ptf->format.width
			|| ptf->format.zero))
		apply_flags(ptf, &nbr, 0, (unsigned long long)ptr);
	else
	{
		nbr.tmp = ft_strjoin_free_both(ft_strdup("0x"), nbr.str);
		ft_swaptr((void **)&nbr.str, (void **)&nbr.tmp);
	}
	ft_putstr(nbr.str, -1, &ptf->size);
	ft_strfree(&nbr.str);
}
