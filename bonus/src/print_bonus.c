/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 05:50:39 by efinda            #+#    #+#             */
/*   Updated: 2025/03/02 17:49:59 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf_bonus.h"

void	ft_putchar(char c, size_t amount, size_t *size)
{
	while (amount)
	{
		write(1, &c, 1);
		(*size)++;
		amount--;
	}
}

void	ft_putstr(char *str, int i, size_t *size)
{
	while (str[++i])
		ft_putchar(str[i], 1, size);
}
