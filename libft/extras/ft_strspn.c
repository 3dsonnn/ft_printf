/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 06:42:11 by efinda            #+#    #+#             */
/*   Updated: 2024/11/14 06:42:16 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strspn(char *str, char *accept)
{
    int  res;

    res = 0;
    if (!str || !accept)
        return (res);
    while (*str)
    {
        if (!ft_strchr(accept, *str))
            return (res);
        res++;
        str++;
    }
    return (res);
}
