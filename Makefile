# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efinda <efinda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/22 22:50:44 by efinda            #+#    #+#              #
#    Updated: 2025/02/26 22:21:06 by efinda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a

SRC =	ft_printf.c				\
		init.c					\
		format.c				\
		type.c					\
		no_type.c				\
		char.c					\
		integer.c				\
		string.c				\
		address.c				\
		hexadecimal.c			\
		print.c					\
		lilibft_0.c				\
		lilibft_1.c				\
		lilibft_2.c				\

CC = cc
FLAGS =
# FLAGS = -Wall -Wextra -Werror
LIB =	ar rcs
RM = rm -rf
OBJ =	$(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)
	#	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.c
		$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
