/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lilibft_0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:07:05 by efinda            #+#    #+#             */
/*   Updated: 2025/02/25 16:39:11 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(char *str)
{
	char	*start;

	start = str;
	if (!str || !*str)
		return (0);
	while (*str)
		str++;
	return (str - start);
}

int	ft_nbrlen(int nbr)
{
	int	res;

	res = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		res++;
	}
	while (nbr)
	{
		nbr /= 10;
		res++;
	}
	return (res);
}

size_t  ft_strchr_count(char *str, char c)
{
    size_t  res;

    res = 0;
    if (!str || !*str || !c)
        return (res);
    while (*str)
    {
        if (*str == c)
            res++;
        str++;
    }
    return (res);
}

inline int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}
