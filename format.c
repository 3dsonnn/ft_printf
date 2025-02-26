/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 05:52:00 by efinda            #+#    #+#             */
/*   Updated: 2025/02/26 19:45:27 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	skip_flag(t_printf *ptf, char id, size_t *flag)
{
	while (*ptf->input && *ptf->input == id)
	{
		*(flag)++;
		ptf->input++;
	}
}

static	void	get_flag_value(t_printf *ptf, size_t *flag)
{
	if (!ft_isdigit(*ptf->input))
		ptf->input++;
	while (ft_isdigit(*ptf->input))
	{
		*(flag) = *(flag) * 10 + *ptf->input - '0';
		ptf->input++;
	}
}

void	parse_format(t_printf *ptf)
{
	while (*ptf->input)
	{
		if (ft_strchr(TYPE, *ptf->input) && type(ptf, ptf->format.start,
				ptf->input))
			return ;
		else if (*ptf->input == '#')
			skip_flag(ptf, '#', &ptf->format.hash);
		else if (*ptf->input == '+')
			skip_flag(ptf, '+', &ptf->format.plus);
		else if (*ptf->input == ' ')
			skip_flag(ptf, ' ', &ptf->format.space);
		else if (*ptf->input == '.')
			get_flag_value(ptf, &ptf->format.dot);
		else if (*ptf->input == '0')
			get_flag_value(ptf, &ptf->format.zero);
		else if (*ptf->input == '-')
			get_flag_value(ptf, &ptf->format.minus);
		else if (ft_isdigit(*ptf->input))
			get_flag_value(ptf, &ptf->format.width);
		else
			return ;
	}
}
