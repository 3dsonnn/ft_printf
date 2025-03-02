/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 23:27:58 by efinda            #+#    #+#             */
/*   Updated: 2025/03/01 23:54:15 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_uintlen(unsigned int n, int base)
{
	int	res;

	res = 0;
	while (n)
	{
		n /= base;
		res++;
	}
	return (res);
}

char	*ft_xtoa(unsigned int n, char *base, int div)
{
	char	*res;
	int		size;

	if (n == 0)
		return (ft_strdup("0"));
	size = ft_uintlen(n, div);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	res[size] = '\0';
	while (n)
	{
		res[--size] = base[n % div];
		n /= div;
	}
	return (res);
}
