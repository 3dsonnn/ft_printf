/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lilibft_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 22:56:32 by efinda            #+#    #+#             */
/*   Updated: 2025/02/24 22:59:57 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *ft_strchr(char *str, char c)
{
    if (!str || !*str || !c)
        return (NULL);
    while (*str)
    {
        if (*str == c)
            return (str);
        str++;
    }
    return (NULL);
}

size_t  ft_strspn(char *str, char *accept)
{
    size_t  res;

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

char    *ft_strpbrk(char *str, char *accept)
{
    if (!str || !accept)
        return (NULL);
    while (*str)
    {
        if (ft_strchr(accept, *str))
            return (str);
        str++;
    }
    return (NULL);
}

char    *ft_strqbrk(char *str, char *accept)
{
    if (!str || !accept)
        return (NULL);
    while (*str)
    {
        if (!ft_strchr(accept, *str))
            return (str);
        str++;
    }
    return (NULL);
}
