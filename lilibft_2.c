/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lilibft_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 22:58:44 by efinda            #+#    #+#             */
/*   Updated: 2025/02/24 22:59:24 by efinda           ###   ########.fr       */
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