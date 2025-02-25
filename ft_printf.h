/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efinda <efinda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:50:54 by efinda            #+#    #+#             */
/*   Updated: 2025/02/25 17:13:51 by efinda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

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

typedef struct s_format
{
	char		*str;
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
}				t_printf;

// FT_PRINTF
int				ft_printf(const char *input, ...);

// LILIBFT_0
int				ft_nbrlen(int nbr);
extern int		ft_isdigit(char c);
size_t			ft_strlen(char *str);
size_t			ft_strchr_count(char *str, char c);

// LILIBFT_1
char			*ft_strchr(char *str, char c);
size_t			ft_strspn(char *str, char *accept);
char			*ft_strpbrk(char *str, char *accept);
char			*ft_strqbrk(char *str, char *accept);

// LILIBFT_2
void			ft_strfree(char **str);
char			*ft_strndup(char *str, int n);
char			*ft_itoa(int nbr);

// INIT
void			init(t_printf *ptf, const char *input);
void			init_format(t_printf *ptf);

// FORMAT
void			parse_format(t_printf *ptf);

// TYPE
int				type(t_printf *ptf, char *start, char *end);

// PRINT
void			ft_putchar(char c, size_t *size);
void			print_no_type(t_printf *ptf);
void			print_int(t_printf *ptf, int nbr, char *strnbr);
void			print_char(t_printf *ptf, char c);
void			print_str(t_printf *ptf, char *str, int i, int len);
void			print_addr(t_printf *ptf, void *ptr);
void			print_uint(t_printf *ptf, unsigned int nbr);
void			print_hex(t_printf *ptf, unsigned int nbr, char *base);

// FLAGS_PROCESS
void			dot(t_printf *ptf);
void			hash(t_printf *ptf);
void			plus(t_printf *ptf);
void			zero(t_printf *ptf);
void			space(t_printf *ptf);
void			minus(t_printf *ptf);
void			width(t_printf *ptf);

// FLAGS_IMPLEMENTATION
void			put_char_loop(char c, size_t amount, size_t *size);

#endif