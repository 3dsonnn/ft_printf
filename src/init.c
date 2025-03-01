/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 07:59:11 by efinda            #+#    #+#             */
/*   Updated: 2025/03/01 13:28:54 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	init_nbr(t_nbr *nbr, int n)
{
	if (n < 0)
	{
		n *= -1;
		nbr->neg = 1;
	}
	else
		nbr->neg = 0;
	nbr->str = ft_itoa(n);
	nbr->tmp = NULL;
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
	*ptf = (t_printf){
		.format.type = '\0',
		.input = (char *)input,
        .size = 0,
		.format.zero = 0,
		.format.hash = 0,
		.format.plus = 0,
		.format.space = 0,
		.format.minus = 0,
		.format.dot = -1,
		.format.width = -1,
		.format.str = NULL,
        .format.start = NULL,
        .format.end = NULL
	};
}
