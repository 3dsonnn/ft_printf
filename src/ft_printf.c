/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:50:52 by efinda            #+#    #+#             */
/*   Updated: 2025/03/02 01:28:26 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static inline void	handle_conflicts(t_printf *ptf)
{
	if (ptf->format.plus)
		ptf->format.space = 0;
	if (ptf->format.dot)
		ptf->format.zero = 0;
	if (ptf->format.minus)
		ptf->format.zero = 0;
}

static void	select_printer(t_printf *ptf)
{
	if (!ptf->format.type)
		print_no_type(ptf);
	if (ptf->format.type == 'c')
		print_char(ptf, (char)va_arg(ptf->args, int));
	if (ptf->format.type == 's')
		print_str(ptf, (char *)va_arg(ptf->args, char *), -1,
			ft_strlen((char *)va_arg(ptf->args, char *)));
	if (ptf->format.type == 'p')
		print_addr(ptf, (void *)va_arg(ptf->args, void *));
	if (ptf->format.type == 'd' || ptf->format.type == 'i')
		print_int(ptf, (int)va_arg(ptf->args, int));
	if (ptf->format.type == 'u')
		print_uint(ptf, (unsigned int)va_arg(ptf->args, unsigned int));
	if (ptf->format.type == 'x')
		print_hex(ptf, (unsigned int)va_arg(ptf->args, unsigned int), 'x');
	if (ptf->format.type == 'X')
		print_hex(ptf, (unsigned int)va_arg(ptf->args, unsigned int), 'X');
	if (ptf->format.type == '%')
		ft_putchar('%', 1, &ptf->size);
	ptf->input = ptf->format.end + 1;
}

static void	read_input(t_printf *ptf)
{
	while (*ptf->input)
	{
		if (*ptf->input == '%')
		{
			ptf->input++;
			// if (!*ptf->input)
			// {
			// 	ptf->size = -1;
			// 	break ;
			// }
			init_format(ptf);
			parse_format(ptf);
			select_printer(ptf);
			continue ;
		}
		ft_putchar(*ptf->input, 1, &ptf->size);
		ptf->input++;
	}
}

int	ft_printf(const char *input, ...)
{
	t_printf	ptf;

	if (!input)
		return (-1);
	init(&ptf, input);
	va_start(ptf.args, input);
	read_input(&ptf);
	va_end(ptf.args);
	return (ptf.size);
}
