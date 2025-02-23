/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 05:52:00 by efinda            #+#    #+#             */
/*   Updated: 2025/02/23 10:11:42 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_format(t_printf *ptf, char *start)
{
	while (*ptf->input)
	{
		if (is_type(*ptf->input) && type(ptf, ptf->format.start, ptf->input))
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
}
