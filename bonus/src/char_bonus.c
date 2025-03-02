/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:50:15 by efinda            #+#    #+#             */
/*   Updated: 2025/03/02 17:48:53 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf_bonus.h"

void	print_char(t_printf *ptf, char c)
{
	if (ptf->format.width > 1)
	{
		if (ptf->format.minus)
		{
			ft_putchar(c, 1, &ptf->size);
			ft_putchar(' ', ptf->format.width - 1, &ptf->size);
		}
		else
		{
			ft_putchar(' ', ptf->format.width - 1, &ptf->size);
			ft_putchar(c, 1, &ptf->size);
		}
	}
	else
		ft_putchar(c, 1, &ptf->size);
}
