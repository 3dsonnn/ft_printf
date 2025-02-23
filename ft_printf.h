/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:50:54 by efinda            #+#    #+#             */
/*   Updated: 2025/02/23 13:45:49 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define LOWER "0123456789abcdef"
# define UPPER "0123456789ABCDEF"
# define DIGITS "0123456789"

typedef struct s_strs
{
	char		*s1;
	char		*s2;
	char		*s3;
	char		*s4;
	char		*s5;
	char		*s6;
}				t_strs;

typedef struct s_format
{
	char		*start;
	char		*end;
	char		type;
	int			hash;
	int			space;
	int			plus;
	size_t		minus;
	size_t		zero;
	size_t		dot;
	size_t		width;
}				t_format;

typedef struct s_printf
{
	char		*input;
	size_t		size;
	va_list		args;
	t_format	format;
	t_strs		strs;
}				t_printf;

#endif