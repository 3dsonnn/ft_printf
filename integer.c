/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:45:16 by efinda            #+#    #+#             */
/*   Updated: 2025/02/27 17:43:31 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

static void	negative(t_printf *ptf, t_nbr nbr)
{
}

void	ft_putnbr(char *str, int i, size_t *size)
{
	while (str[++i])
		ft_putchar(str[i], 1, size);
}

void	apply_precision(char **str, int new_len, int old_len)
{
	char	*tmp;

	tmp = *str;
	*str = ft_calloc(1, sizeof(char) * new_len + 1);
	ft_memset(*str, '0', new_len);
	ft_strnfill(*str + new_len - old_len, tmp, old_len);
	ft_strfree(tmp);
}

static void	positive(t_printf *ptf, t_nbr nbr)
{
	if (ptf->format.dot && ptf->format.dot > nbr.len)
	{
		apply_precision(&nbr.str, ptf->format.dot, ft_strlen(nbr.str));
		ft_putnbr(nbr.str, -1, &ptf->size);
		ft_putchar('0', ptf->format.dot - nbr.len, &ptf->size);
	}
	if (ptf->format.zero && ptf->format.zero > nbr.len)
		ft_putchar('0', ptf->format.zero - nbr.len, &ptf->size);
	if (ptf->format.width && ptf->format.width > nbr.len)
	{
		ft_putchar(' ', ptf->format.width - nbr.len, &ptf->size);
        ft_putnbr(nbr.str, -1, &ptf->size);
	}
	if (ptf->format.minus && ptf->format.minus > nbr.len)
	{
		ft_putnbr(nbr.str, -1, &ptf->size);
		ft_putchar(' ', ptf->format.minus - nbr.len, &ptf->size);
	}
	if (ptf->format.plus)
	{
		ft_putchar('+', 1, &ptf->size);
		ft_putnbr(nbr.str, -1, &ptf->size);
	}
	if (ptf->format.space)
	{
		ft_putchar(' ', 1, &ptf->size);
		ft_putnbr(nbr.str, -1, &ptf->size);
	}
}

void	print_int(t_printf *ptf, int n, t_nbr nbr)
{
	if (init_nbr(&nbr, n))
		return ;
	if (!has_flag(ptf->format))
        ft_putnbr(nbr.str, -1, &ptf->size);
	if (nbr.neg)
		negative(ptf, nbr);
	else
		positive(ptf, nbr);
	ft_strfree(&nbr.str);
}

void	print_uint(t_printf *ptf, unsigned int nbr)
{
}
