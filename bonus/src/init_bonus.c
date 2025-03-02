/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 07:59:11 by efinda            #+#    #+#             */
/*   Updated: 2025/03/02 17:49:43 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf_bonus.h"

int	init_nbr(t_nbr *nbr, t_integer n)
{
	if (nbr->id == 'i')
	{
		if (n.i < 0)
		{
			n.i *= -1;
			nbr->neg = 1;
		}
		if (n.i == INT_MIN)
			nbr->str = ft_strdup("2147483648");
		else
			nbr->str = ft_itoa(n.i);
	}
	else if (nbr->id == 'u')
		nbr->str = ft_xtoa(n.ui, DIGITS, 10);
	else if (nbr->id == 'x')
		nbr->str = ft_xtoa(n.ui, HEXLOW, 16);
	else if (nbr->id == 'X')
		nbr->str = ft_xtoa(n.ui, HEXUP, 16);
	else if (nbr->id == 'a')
		nbr->str = ft_atoa(n.a, HEXLOW, 16);
	if (!nbr->str)
		return (1);
	nbr->len = ft_strlen(nbr->str);
	return (0);
}

void	init_format(t_printf *ptf)
{
	ptf->format.type = '\0';
	ptf->format.hash = 0;
	ptf->format.zero = 0;
	ptf->format.plus = 0;
	ptf->format.space = 0;
	ptf->format.minus = 0;
	ptf->format.dot = -1;
	ptf->format.width = -1;
	ptf->format.start = ptf->input - 1;
	ptf->format.end = NULL;
}

void	init(t_printf *ptf, const char *input)
{
	*ptf = (t_printf){.format.type = '\0', .input = (char *)input, .size = 0,
		.format.zero = 0, .format.hash = 0, .format.plus = 0, .format.space = 0,
		.format.minus = 0, .format.dot = -1, .format.width = -1,
		.format.str = NULL, .format.start = NULL, .format.end = NULL};
}
