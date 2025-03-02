# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efinda <efinda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/22 22:50:44 by efinda            #+#    #+#              #
#    Updated: 2025/03/02 18:03:40 by efinda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libftprintf.a

CC = cc
LIB = ar rcs
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC =	mandatory/ft_printf.c			\
		mandatory/print_utils.c			\

BONUS_SRC =	bonus/src/ft_printf_bonus.c			\
			bonus/src/init_bonus.c				\
			bonus/src/format_bonus.c			\
			bonus/src/type_bonus.c				\
			bonus/src/no_type_bonus.c			\
			bonus/src/char_bonus.c				\
			bonus/src/integer_bonus.c			\
			bonus/src/string_bonus.c			\
			bonus/src/print_bonus.c				\
			bonus/src/flags_bonus.c				\
			bonus/src/utils_bonus.c				\
			bonus/src/aux_bonus.c				\

LIBFT_DIR =	bonus/libft
LIBFT =	$(LIBFT_DIR)/libft.a

OBJ = $(SRC:%.c=%.o)
BONUS_OBJ = $(BONUS_SRC:%.c=%.o)

all: $(NAME)

bonus: $(BONUS_OBJ) $(NAME)
	@$(LIB) $(NAME) $(BONUS_OBJ)

$(LIBFT):
	@$(MAKE) -s -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) $(LIBFT)
	$(LIB) $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ) $(BONUS_OBJ)
	$(MAKE) -s -C $(LIBFT_DIR) clean

fclean: clean
	@$(RM) $(NAME)
	$(MAKE) -s -C $(LIBFT_DIR) fclean

re: fclean all bonus

.PHONY: all clean fclean re bonus
