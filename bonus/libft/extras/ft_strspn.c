/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 06:42:11 by efinda            #+#    #+#             */
/*   Updated: 2025/03/02 16:50:57 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strspn(char *str, char *accept)
{
	int	res;

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
