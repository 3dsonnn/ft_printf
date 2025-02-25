/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_process.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 05:50:08 by efinda            #+#    #+#             */
/*   Updated: 2025/02/25 09:50:15 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hash(t_printf *ptf)
{
	while (*ptf->input && *ptf->input == '#')
	{
		ptf->format.hash++;
		ptf->input++;
	}
}

void	plus(t_printf *ptf)
{
	while (*ptf->input && *ptf->input == '+')
	{
		ptf->format.plus++;
		ptf->input++;
	}
}

void	space(t_printf *ptf)
{
	while (*ptf->input && *ptf->input == ' ')
	{
		ptf->format.space++;
		ptf->input++;
	}
}

void	dot(t_printf *ptf)
{
	ptf->input++;
	while (ft_isdigit(*ptf->input))
	{
		ptf->format.dot = ptf->format.dot * 10 + *ptf->input - '0';
		ptf->input++;
	}
}

void	zero(t_printf *ptf)
{
	while (*ptf->input == '0')
	{
		ptf->format.zero++;
		ptf->input++;
	}
}
void	minus(t_printf *ptf)
{
	ptf->input++;
	while (ft_isdigit(*ptf->input))
	{
		ptf->format.minus = ptf->format.minus * 10 + *ptf->input - '0';
		ptf->input++;
	}
}

void	width(t_printf *ptf)
{
	while (ft_isdigit(*ptf->input))
	{
		ptf->format.width = ptf->format.width * 10 + *ptf->input - '0';
		ptf->input++;
	}
}
