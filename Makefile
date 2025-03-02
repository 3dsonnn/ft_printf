# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efinda <efinda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/22 22:50:44 by efinda            #+#    #+#              #
#    Updated: 2025/03/02 02:14:25 by efinda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a

CC = cc
FLAGS =
# FLAGS = -Wall -Wextra -Werror

SRC =	src/ft_printf.c				\
		src/init.c					\
		src/format.c				\
		src/type.c					\
		src/no_type.c				\
		src/char.c					\
		src/integer.c				\
		src/string.c				\
		src/address.c				\
		src/print.c					\
		src/flags.c					\
		src/utils.c					\

LIBFT =	libft/libft.a
LIB =	ar rcs
RM = rm -rf
OBJ_DIR = obj
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(LIBFT) $(OBJ_DIR) $(NAME)

$(LIBFT):
	@$(MAKE) -s -C libft

$(OBJ_DIR):
	@mkdir -p $@

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) $(LIBFT)
	$(LIB) $(NAME) $(OBJ)
	@cp $(LIBFT) .
	#$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ_DIR)
	$(MAKE) -s -C libft clean

fclean: clean
	@$(RM) $(NAME)
	$(MAKE) -s -C libft fclean

re: fclean all
	$(MAKE) -s -C libft re

.PHONY: all clean fclean re
