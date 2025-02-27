/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 07:59:11 by efinda            #+#    #+#             */
/*   Updated: 2025/02/27 17:41:43 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	init_nbr(t_nbr *nbr, int n)
{
	nbr->str = ft_itoa(n);
	if (!nbr->str)
		return (1);
	nbr->len = ft_strlen(nbr->str);
	if (*nbr->str == '-')
		nbr->neg = 1;
	else
		nbr->neg = 0;
	return (0);
}

void	init_format(t_printf *ptf)
{
	ptf->format.type = '\0';
	ptf->format.dot = 0;
	ptf->format.hash = 0;
	ptf->format.zero = 0;
	ptf->format.plus = 0;
	ptf->format.space = 0;
	ptf->format.minus = 0;
	ptf->format.width = 0;
	ptf->format.start = ptf->input - 1;
	ptf->format.end = NULL;
}

void	init(t_printf *ptf, const char *input)
{
	*ptf = (t_printf){
		.format.type = '\0',
		.input = (char *)input,
        .size = 0,
		.format.dot = 0,
		.format.zero = 0,
		.format.hash = 0,
		.format.plus = 0,
		.format.space = 0,
		.format.minus = 0,
		.format.width = 0,
		.format.str = NULL,
        .format.start = NULL,
        .format.end = NULL
	};
}
