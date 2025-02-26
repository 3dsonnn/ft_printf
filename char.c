/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:50:15 by efinda            #+#    #+#             */
/*   Updated: 2025/02/26 19:50:33 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_char(t_printf *ptf, char c)
{
	if (!ptf->format.minus)
	{
		if (ptf->format.width && ptf->format.width > 1)
			ft_putchar(' ', ptf->format.width - 1, &ptf->size);
		if (ptf->format.zero && ptf->format.zero > 1)
			ft_putchar(' ', ptf->format.zero - 1, &ptf->size);
	}
	ft_putchar(c, 1, &ptf->size);
	if (ptf->format.minus != -1 && ptf->format.minus > 1)
		ft_putchar(' ', ptf->format.minus - 1, &ptf->size);
}
