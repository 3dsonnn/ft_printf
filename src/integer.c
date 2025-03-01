/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:45:16 by efinda            #+#    #+#             */
/*   Updated: 2025/03/01 13:29:02 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static inline int	has_flag(t_format format)
{
	return (format.dot || format.minus || format.plus || format.space
		|| format.width || format.zero);
}

static inline void	handle_conflicts(t_printf *ptf)
{
	if (ptf->format.plus)
		ptf->format.space = 0;
	if (ptf->format.dot)
		ptf->format.zero = 0;
	if (ptf->format.minus)
		ptf->format.zero = 0;
}

static void	negative(t_printf *ptf, t_nbr *nbr)
{
}

void	apply_precision(t_nbr *nbr, int new_len)
{
	nbr->tmp = ft_calloc(new_len + 1, sizeof(char));
	ft_memset(nbr->tmp, '0', new_len);
	ft_strnfill(nbr->tmp + new_len - nbr->len, nbr->str, nbr->len);
	nbr->len = new_len;
	ft_strfree(&nbr->str);
	ft_swaptr((void **)&nbr->str, (void **)&nbr->tmp);
}

void	apply_width(t_printf *ptf, t_nbr *nbr, int new_len, char c)
{
	nbr->tmp = ft_calloc(new_len + 1, sizeof(char));
	ft_memset(nbr->tmp, c, new_len);
	if (ptf->format.minus)
		ft_strnfill(nbr->tmp, nbr->str, nbr->len);
	else
		ft_strnfill(nbr->tmp + new_len - nbr->len, nbr->str, nbr->len);
	nbr->len = new_len;
	ft_strfree(&nbr->str);
	ft_swaptr((void **)&nbr->str, (void **)&nbr->tmp);
}

void	apply_sign(t_printf *ptf, t_nbr *nbr)
{
	if (nbr->neg)
	{
		nbr->tmp = ft_strjoin_free_both(ft_ctoa('-'), nbr->str);
		ft_swaptr((void **)&nbr->str, (void **)&nbr->tmp);
	}
	else if (ptf->format.plus)
	{
		nbr->tmp = ft_strjoin_free_both(ft_ctoa('+'), nbr->str);
		ft_swaptr((void **)&nbr->str, (void **)&nbr->tmp);
	}
	else if (ptf->format.space)
	{
		nbr->tmp = ft_strjoin_free_both(ft_ctoa(' '), nbr->str);
		ft_swaptr((void **)&nbr->str, (void **)&nbr->tmp);
	}
	nbr->len = ft_strlen(nbr->str);
}

static void	apply_flags(t_printf *ptf, t_nbr *nbr)
{
	if (ptf->format.dot == 0 && *nbr->str == '0')
	{
		ft_strfree(&nbr->str);
		nbr->str = ft_strdup("");
	}
	if (ptf->format.dot != -1 && ptf->format.dot > nbr->len)
		apply_precision(nbr, ptf->format.dot);
	apply_sign(ptf, nbr);
	if (ptf->format.width != -1 && ptf->format.width > nbr->len)
	{
		if (ptf->format.dot != -1 || !ptf->format.zero)
			apply_width(ptf, nbr, ptf->format.width, ' ');
		else
			apply_width(ptf, nbr, ptf->format.width, '0');
	}
}

void	print_int(t_printf *ptf, int n, t_nbr nbr)
{
	if (init_nbr(&nbr, n))
		return ;
	if (has_flag(ptf->format))
	{
		// printf("n=%d\t->%s\n", n, nbr.str);
		apply_flags(ptf, &nbr);
	}
	else if (n < 0)
		ft_putchar('-', 1, &ptf->size);
	ft_putstr(nbr.str, -1, &ptf->size);
	ft_strfree(&nbr.str);
}

void	print_uint(t_printf *ptf, unsigned int nbr)
{
}
