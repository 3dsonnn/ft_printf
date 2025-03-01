/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:50:54 by efinda            #+#    #+#             */
/*   Updated: 2025/03/01 12:32:44 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define TYPE "cspdiuxX%"
# define NBR "123456789"
# define DIGITS "0123456789"
# define HEXLOW "0123456789abcdef"
# define HEXUP "0123456789ABCDEF"

typedef struct s_nbr
{
	char		*str;
	char		*tmp;
	size_t		len;
	int			neg;
	int			i;
}				t_nbr;

typedef struct s_format
{
	char		*str;
	char		*start;
	char		*end;
	char		type;
	int			hash;
	int			space;
	int			plus;
	int			zero;
	int			minus;
	long		dot;
	long		width;
}				t_format;

typedef struct s_printf
{
	char		*input;
	size_t		size;
	va_list		args;
	t_format	format;
}				t_printf;

// FT_PRINTF
int				ft_printf(const char *input, ...);

// INIT
void			init(t_printf *ptf, const char *input);
void			init_format(t_printf *ptf);
int				init_nbr(t_nbr *nbr, int n);

// FORMAT
void			parse_format(t_printf *ptf);

// TYPE
int				type(t_printf *ptf, char *start, char *end);

// PRINT
void			ft_putchar(char c, size_t amount, size_t *size);
void			ft_putstr(char *str, int i, size_t *size);

// 
void			print_no_type(t_printf *ptf);
void			print_int(t_printf *ptf, int n, t_nbr nbr);
void			print_char(t_printf *ptf, char c);
void			print_str(t_printf *ptf, char *str, int i, int len);
void			print_addr(t_printf *ptf, void *ptr);
void			print_uint(t_printf *ptf, unsigned int nbr);
void			print_hex(t_printf *ptf, unsigned int nbr, char *base);

#endif
