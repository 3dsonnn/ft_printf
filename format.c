/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 05:52:00 by efinda            #+#    #+#             */
/*   Updated: 2025/02/25 10:56:13 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static inline void	handle_conflicts(t_printf *ptf)
{
	if (ptf->format.minus != -1)
		ptf->format.zero = -1;
	if (ptf->format.plus != -1)
		ptf->format.space = -1;
}

void	parse_format(t_printf *ptf)
{
	while (*ptf->input)
	{
		if (ft_strchr(TYPE, *ptf->input) && type(ptf, ptf->format.start,
				ptf->input))
			return ;
		else if (*ptf->input == '#')
			hash(ptf);
		else if (*ptf->input == '+')
			plus(ptf);
		else if (*ptf->input == ' ')
			space(ptf);
		else if (*ptf->input == '.')
			dot(ptf);
		else if (*ptf->input == '0')
			zero(ptf);
		else if (*ptf->input == '-')
			minus(ptf);
		else if (ft_isdigit(*ptf->input))
			width(ptf);
		else
			return ;
	}
	handle_conflicts(ptf);
}
