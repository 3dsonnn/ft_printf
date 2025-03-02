/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:10:09 by efinda            #+#    #+#             */
/*   Updated: 2025/03/02 17:48:58 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf_bonus.h"

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
	{
		if (c == '0' && nbr->id == 'i' && (*nbr->str == '+'
				|| *nbr->str == '-'))
			int_reverse_fill(nbr->tmp, nbr->str);
		else if (c == '0' && (((nbr->id == 'x' || nbr->id == 'X')
					&& ptf->format.hash) || nbr->id == 'a'))
			hex_reverse_fill(nbr->tmp, nbr->str);
		else
			ft_strnfill(nbr->tmp + new_len - nbr->len, nbr->str, nbr->len);
	}
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

void	apply_hash(t_printf *ptf, t_nbr *nbr, unsigned int n,
		unsigned long long a)
{
	if ((nbr->id == 'x' || nbr->id == 'X') && ptf->format.hash && n != 0)
	{
		if (nbr->id == 'x')
			nbr->tmp = ft_strjoin_free_both(ft_strdup("0x"), nbr->str);
		else
			nbr->tmp = ft_strjoin_free_both(ft_strdup("0X"), nbr->str);
		ft_swaptr((void **)&nbr->str, (void **)&nbr->tmp);
		nbr->len = ft_strlen(nbr->str);
	}
	if (nbr->id == 'a' && a != 0)
	{
		nbr->tmp = ft_strjoin_free_both(ft_strdup("0x"), nbr->str);
		ft_swaptr((void **)&nbr->str, (void **)&nbr->tmp);
		nbr->len = ft_strlen(nbr->str);
	}
}
