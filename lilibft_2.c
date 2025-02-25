/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lilibft_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 22:58:44 by efinda            #+#    #+#             */
/*   Updated: 2025/02/25 16:37:14 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_strfree(char **str)
{
    if (str && *str)
    {
        free(*str);
        *str = NULL;
    }
}

char	*ft_strndup(char *str, int n)
{
	char	*res;
	int		i;

    i = -1;
    if (!str || n < 1)
		return (NULL);
    if (n > ft_strlen(str))
        n = ft_strlen(str);
	res = (char *)malloc(sizeof(char) * (n + 1));
	if (!res)
		return (NULL);
    while (++i < n)
		res[i] = str[i];
	res[i] = '\0';
	return (res);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int		size;

	if (nbr == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (nbr== 0)
		return (ft_strdup("0"));
	size = ft_nbrlen(nbr);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	res[size] = '\0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		res[--size] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (res);
}