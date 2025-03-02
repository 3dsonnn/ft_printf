/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:02:30 by efinda            #+#    #+#             */
/*   Updated: 2025/03/02 18:29:04 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_num(char c, int *res)
{
	write(1, &c, 1);
	(*res)++;
}

void	ft_putstr(char *s, int *res)
{
	if (!s)
		ft_putstr("(null)", res);
	else
	{
		while (*s)
		{
			ft_putchar_num(*s, res);
			s++;
		}
	}
}

void	ft_putnbr(int nb, int *num_digit)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648", num_digit);
	else if (nb < 0)
	{
		ft_putchar_num('-', num_digit);
		nb = -nb;
		ft_putnbr(nb, num_digit);
	}
	else if (nb > 9)
	{
		ft_putnbr((nb / 10), num_digit);
		ft_putchar_num((nb % 10) + 48, num_digit);
	}
	else
		ft_putchar_num(nb + 48, num_digit);
}

void	ft_printbase(unsigned long long nbr, char *simbol, int *num_digit,
		unsigned int base)
{
	if (nbr >= base)
		ft_printbase(nbr / base, simbol, num_digit, base);
	ft_putchar_num(simbol[nbr % base], num_digit);
}

void	ft_printptr(void *ptr, int *res)
{
	unsigned long	p;

	p = (unsigned long)ptr;
	if (ptr != NULL)
	{
		ft_putstr("0x", res);
		ft_printbase(p, "0123456789abcdef", res, 16);
	}
	else
		ft_putstr("(nil)", res);
}
