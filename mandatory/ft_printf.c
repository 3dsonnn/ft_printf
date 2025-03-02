/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:01:32 by efinda            #+#    #+#             */
/*   Updated: 2025/03/02 18:45:37 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_identif(va_list args, const char *s, int *res)
{
	if (*s == 'c')
		ft_putchar_num((char)va_arg(args, int), res);
	else if (*s == 's')
		ft_putstr((char *)va_arg(args, char *), res);
	else if (*s == 'd' || *s == 'i')
		ft_putnbr((int)va_arg(args, int), res);
	else if (*s == 'x')
		ft_printbase((unsigned int)va_arg(args, unsigned int),
			"0123456789abcdef", res, 16);
	else if (*s == 'X')
		ft_printbase((unsigned int)va_arg(args, unsigned int),
			"0123456789ABCDEF", res, 16);
	else if (*s == 'u')
		ft_printbase((unsigned int)va_arg(args, unsigned int), "0123456789",
			res, 10);
	else if (*s == 'p')
		ft_printptr((void *)va_arg(args, void *), res);
	else if (*s == '%')
		ft_putchar_num(*s, res);
}

int	init(const char *s, int *res)
{
	if (!s)
		return (-1);
	*res = 0;
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		res;
	va_list	args;

	if (init(s, &res))
		return (-1);
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (!*s)
				break ;
			ft_check_identif(args, s, &res);
		}
		else
			ft_putchar_num(*s, &res);
		s++;
	}
	va_end(args);
	return (res);
}
