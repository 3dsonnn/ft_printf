/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_type_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:48:25 by efinda            #+#    #+#             */
/*   Updated: 2025/03/03 12:11:24 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf_bonus.h"

void	print_no_type(t_printf *ptf)
{
	while (ptf->format.start)
	{
		ft_putchar(*ptf->format.start, 1, &ptf->size);
		++ptf->format.start;
		if (ptf->format.start == ptf->format.end)
		{
			ft_putchar(*ptf->format.start, 1, &ptf->size);
			break ;
		}
	}
}
