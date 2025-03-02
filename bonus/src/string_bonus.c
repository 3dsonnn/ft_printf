/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:11:13 by efinda            #+#    #+#             */
/*   Updated: 2025/03/02 17:50:04 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf_bonus.h"

static char	*null(t_printf *ptf, int *len)
{
	if (ptf->format.dot != -1 && ptf->format.dot < 6)
	{
		*(len) = 0;
		return ("");
	}
	*(len) = 6;
	return ("(null)");
}

void	print_str(t_printf *ptf, char *str, int i, int len)
{
	len = ft_strlen(str);
	if (!str)
		str = null(ptf, &len);
	if (ptf->format.dot != -1 && ptf->format.dot < ft_strlen(str))
		len = ptf->format.dot;
	if (ptf->format.width != -1 && ptf->format.width > ft_strlen(str))
	{
		if (ptf->format.minus)
		{
			while (++i < len)
				ft_putchar(str[i], 1, &ptf->size);
			ft_putchar(' ', ptf->format.width - len, &ptf->size);
		}
		else
		{
			ft_putchar(' ', ptf->format.width - len, &ptf->size);
			while (++i < len)
				ft_putchar(str[i], 1, &ptf->size);
		}
	}
	else
	{
		while (++i < len)
			ft_putchar(str[i], 1, &ptf->size);
	}
}
