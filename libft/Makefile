# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 15:34:36 by jhesso            #+#    #+#              #
#    Updated: 2022/12/02 16:10:20 by jhesso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRC = ./src/ft_atoi.c ./src/ft_bzero.c ./src/ft_calloc.c ./src/ft_isalnum.c ./src/ft_isalpha.c\
			./src/ft_isascii.c ./src/ft_isdigit.c ./src/ft_isprint.c ./src/ft_memchr.c\
			./src/ft_memcmp.c ./src/ft_memcpy.c ./src/ft_memmove.c ./src/ft_memset.c ./src/ft_strchr.c\
			./src/ft_strdup.c ./src/ft_strlcat.c ./src/ft_strlcpy.c ./src/ft_strlen.c ./src/ft_strncmp.c\
			./src/ft_strnstr.c ./src/ft_strrchr.c ./src/ft_tolower.c ./src/ft_toupper.c ./src/ft_substr.c\
			./src/ft_strjoin.c ./src/ft_putchar_fd.c ./src/ft_putstr_fd.c ./src/ft_putendl_fd.c\
			./src/ft_putnbr_fd.c ./src/ft_itoa.c ./src/ft_lstadd_back.c ./src/ft_lstadd_front.c\
			./src/ft_lstdelone.c ./src/ft_lstiter.c ./src/ft_lstlast.c ./src/ft_lstmap.c\
			./src/ft_lstnew.c ./src/ft_lstsize.c ./src/ft_lstclear.c ./src/get_next_line.c

OBJ = ./obj/ft_atoi.o ./obj/ft_bzero.o ./obj/ft_calloc.o ./obj/ft_isalnum.o ./obj/ft_isalpha.o\
			./obj/ft_isascii.o ./obj/ft_isdigit.o ./obj/ft_isprint.o ./obj/ft_memchr.o\
			./obj/ft_memcmp.o ./obj/ft_memcpy.o ./obj/ft_memmove.o ./obj/ft_memset.o ./obj/ft_strchr.o\
			./obj/ft_strdup.o ./obj/ft_strlcat.o ./obj/ft_strlcpy.o ./obj/ft_strlen.o ./obj/ft_strncmp.o\
			./obj/ft_strnstr.o ./obj/ft_strrchr.o ./obj/ft_tolower.o ./obj/ft_toupper.o ./obj/ft_substr.o\
			./obj/ft_strjoin.o ./obj/ft_putchar_fd.o ./obj/ft_putstr_fd.o ./obj/ft_putendl_fd.o\
			./obj/ft_putnbr_fd.o ./obj/ft_itoa.o ./obj/ft_lstadd_back.o ./obj/ft_lstadd_front.o\
			./obj/ft_lstdelone.o ./obj/ft_lstiter.o ./obj/ft_lstlast.o ./obj/ft_lstmap.o\
			./obj/ft_lstnew.o ./obj/ft_lstsize.o ./obj/ft_lstclear.o ./obj/get_next_line.o

INCLUDE = libft.h

all: $(NAME)

$(NAME): object
	cc $(FLAGS) -c $(SRC)
	mv *.o ./obj/
	ar rcs $(NAME) $(OBJ)

object: obj
	mkdir -p obj

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re object obj
