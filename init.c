/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 07:59:11 by efinda            #+#    #+#             */
/*   Updated: 2025/02/23 10:06:37 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	reset_format(t_printf *ptf)
{
	*ptf = (t_printf){
		.format.type = '\0',
		.format.dot = 0,
		.format.hash = 0,
		.format.zero = 0,
		.format.plus = 0,
		.format.space = 0,
		.format.minus = 0,
		.format.width = 0,
        .format.start = ptf->input - 1,
        .format.end = NULL,
        .strs.s1 = NULL,
        .strs.s2 = NULL,
        .strs.s3 = NULL,
        .strs.s4 = NULL,
        .strs.s5 = NULL,
        .strs.s6 = NULL
	};
}

void	init(t_printf *ptf, const char *input)
{
	*ptf = (t_printf){
		.format.type = '\0',
		.input = input,
        .size = 0,
		.format.dot = 0,
		.format.zero = 0,
		.format.hash = 0,
		.format.plus = 0,
		.format.space = 0,
		.format.minus = 0,
		.format.width = 0,
        .format.start = NULL,
        .format.end = NULL,
        .strs.s1 = NULL,
        .strs.s2 = NULL,
        .strs.s3 = NULL,
        .strs.s4 = NULL,
        .strs.s5 = NULL,
        .strs.s6 = NULL
	};
}
