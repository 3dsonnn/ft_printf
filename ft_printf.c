/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:50:52 by efinda            #+#    #+#             */
/*   Updated: 2025/02/23 10:06:17 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    choose_type(t_printf *ptf)
{
    if (!ptf->format.type)
        printf_no_type(ptf);
    if (ptf->format.type == 'c')
        print_char(ptf, va_arg(ptf->args, char));
    if (ptf->format.type == 's')
        print_str(ptf, va_arg(ptf->args, char *));
    if (ptf->format.type == 'p')
        print_pointer(ptf, va_arg(ptf->args, void *));
    if (ptf->format.type == 'd')
        print_integer(ptf, va_arg(ptf->args, int));
    if (ptf->format.type == 'i')
        print_integer(ptf, va_arg(ptf->args, int));
    if (ptf->format.type == 'u')
        print_integer(ptf, va_arg(ptf->args, unsigned int));
    if (ptf->format.type == 'x')
        print_hexadecimal(ptf, va_arg(ptf->args, unsigned int), LOWER);
    if (ptf->format.type == 'X')
        print_hexadecimal(ptf, va_arg(ptf->args, unsigned int), UPPER);
    if (ptf->format.type == '%')
        print_percent_sign(ptf->size);
}

static  void	read_input(t_printf *ptf)
{
	while (*ptf->input)
	{
		if (*ptf->input == '%')
		{
			ptf->input++;
			if (!*ptf->input)
			{
				ptf->size = -1;
				break ;
			}
	        reset_format(ptf);
			parse_format(ptf, ptf->input);
            choose_type(ptf);
		}
		else
			ft_putchar(*ptf->input, &ptf->size);
		ptf->input++;
	}
}

int	ft_printf(const char *input, ...)
{
	t_printf	ptf;

	if (!input)
		return (-1);
    init(&ptf, input);
    va_start(ptf.args, ptf.input);
	read_input(&ptf);
	va_end(ptf.args);
	return (ptf.size);
}
