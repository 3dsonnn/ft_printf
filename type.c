/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 11:14:16 by efinda            #+#    #+#             */
/*   Updated: 2025/02/23 19:38:15 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	type_check_dot(t_printf *ptf, char *dot, int i, int flag)
{
	if (ft_strchr_count(ptf->strs.s1, '.') > 1)
		flag++;
	if (ft_strlen(dot) == 2)
		return (0);
	while (dot[++i] && dot[i + 1])
		if (!ft_isdigit(dot[i]))
			flag++;
	if (flag)
	{
		ft_free(&ptf->strs.s1);
		ptf->format.type = '\0';
		return (1);
	}
	return (0);
}

static int	type_check_zero(t_printf *ptf, char *str, char *dot)
{
    char    *tmp;
	char    *aux;

    tmp = ft_strchr(str, '0');
    while (tmp && *tmp == '0')
    {
        aux = tmp + ft_strspn(tmp, DIGITS);
        if (!dot && aux == str + ft_strlen(str) - 1 || (dot && *aux == '.'))
            return (0);
        if (ft_strchr("123456789", *(tmp + 1)))
        {
		    ft_free(&ptf->strs.s1);
            ptf->format.type = '\0';
            return (1);
        }
        tmp++;
        tmp = ft_strchr(tmp, '0');
    }
}

static int	type_check_width(t_printf *ptf, char *width, char *dot, int ptr[3])
{
    if (type_check_zero(ptf, ptf->strs.s1, dot))
        return (1);
	if (!dot)
	{
		dot = ft_strqbrk(width, DIGITS);
		if (is_type(*dot))
			return (0);
		ptr[1]++;
	}
	while (width[++ptr[0]] && width[ptr[0]] != '.' && !is_type(width[ptr[0]]))
		if (!ft_isdigit(width[ptr[0]]))
			ptr[1]++;
	if (ptr[1])
	{
		ft_free(&ptf->strs.s1);
		ptf->format.type = '\0';
		return (1);
	}
	return (0);
}

int	type(t_printf *ptf, char *start, char *end)
{
	ptf->format.end = end;
	ptf->strs.s1 = ft_strndup(start, end - start + 1);
	if (ft_strchr(ptf->strs.s1, '.') && type_check_dot(ptf,
			ft_strchr(ptf->strs.s1, '.'), 0, 0))
		return (1);
	if (ft_strpbrk(ptf->strs.s1, DIGITS) && type_check_width(ptf,
			ft_strpbrk(ptf->strs.s1, DIGITS), ft_strchr(ptf->strs.s1, '.'),
			(char[]){-1, 0, -1}))
		return (1);
	while ()
	{
	}
	ptf->format.type = *ptf->input;
	return (1);
}
