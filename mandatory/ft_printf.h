/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:01:52 by efinda            #+#    #+#             */
/*   Updated: 2025/03/02 18:44:29 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_putchar_num(char c, int *res);
void	ft_putstr(char *str, int *res);
void	ft_putnbr(int nb, int *num_digit);
void	ft_printbase(unsigned long long nbr,
			char *simbol, int *num_digit, unsigned int base);
void	ft_printptr(void *ptr, int *res);
int		ft_printf(const char *s, ...);
int	init(const char *s, int *res);

#endif
