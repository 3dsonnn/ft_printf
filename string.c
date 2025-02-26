/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:11:13 by efinda            #+#    #+#             */
/*   Updated: 2025/02/26 19:11:38 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_str(t_printf *ptf, char *str, int i, int len)
{
	if (!str && ptf->format.dot && ptf->format.dot < 6)
	{
		str = "";
		len = 0;
	}
	else if (!str)
	{
		str = "(null)";
		len = 6;
	}
	if (ptf->format.dot && ptf->format.dot < ft_strlen(str))
		len = ptf->format.dot;
	if (!ptf->format.minus)
	{
		if (ptf->format.width && ptf->format.width > ft_strlen(str))
			ft_putchar(' ', ptf->format.width - len, &ptf->size);
		if (ptf->format.zero && ptf->format.zero > ft_strlen(str))
			ft_putchar(' ', ptf->format.zero - len, &ptf->size);
	}
	while (++i < len)
		ft_putchar(str[i], 1, &ptf->size);
	if (ptf->format.minus != -1 && ptf->format.minus > ft_strlen(str))
		ft_putchar(' ', ptf->format.minus - len, &ptf->size);
}
