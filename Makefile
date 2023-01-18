# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 19:43:43 by jhesso            #+#    #+#              #
#    Updated: 2023/01/18 17:48:55 by jhesso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
FLAGS = -Wall -Wextra -Werror

RM = rm -f

LIBFT_D = ./libft
LIBFT = ./libft/libft.a

SRC = src/ft_printf.c src/ft_itoa_unsigned.c src/hex.c src/arguments.c

INCLUDE = ./include/

OBJ = ft_printf.o ft_itoa_unsigned.o hex.o arguments.o

GREEN = \033[0;32m
BLUE = \033[0;34m
RESET = \033[0m

all: $(NAME)

$(NAME):
	@echo "$(BLUE)compiling library$(RESET)"
	@$(MAKE) -C $(LIBFT_D)
	@cp $(LIBFT) ./$(NAME)
	@$(CC) $(FLAGS) -c $(SRC) -I $(INCLUDE)
	@ar rus $(NAME) $(OBJ)
	@echo "$(GREEN)DONE$(RESET)"

clean:
	@echo "$(BLUE)removing object files$(RESET)"
	@$(MAKE) clean -C $(LIBFT_D)
	@$(RM) $(OBJ)
	@echo "$(GREEN)DONE$(RESET)"

fclean: clean
	@echo "$(BLUE)Removing library$(RESET)"
	@$(MAKE) fclean -C $(LIBFT_D)
	@$(RM) $(NAME)
	@echo "$(GREEN)DONE$(RESET)"

re: fclean all

.PHONY: all clean fclean re
