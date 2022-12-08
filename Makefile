# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 16:52:55 by jhesso            #+#    #+#              #
#    Updated: 2022/12/08 17:09:37 by jhesso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	cc $(CFLAGS) $(SRC) -c
	ar rcs $(NAME) $(OBJ)

clean:
	/bin/rm *.o

fclean: clean
	/bin/rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
