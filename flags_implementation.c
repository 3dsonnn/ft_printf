/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_implementation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 09:08:36 by efinda            #+#    #+#             */
/*   Updated: 2025/02/25 17:12:55 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    put_char_loop(char c, size_t amount, size_t *size)
{
    while (amount)
    {
        ft_putchar(c, size);
        amount--;
    }
}

void    field_width(t_printf *ptf)
{
}

void    alternate_form(t_printf *ptf)
{
}

void    zero_pading(t_printf *ptf)
{
}

void    precision(t_printf *ptf)
{
}
