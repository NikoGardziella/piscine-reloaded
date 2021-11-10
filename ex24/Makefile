# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngardzie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 14:14:13 by ngardzie          #+#    #+#              #
#    Updated: 2021/11/08 11:25:31 by ngardzie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_PATH = ./srcs/

HEADER = ./includes/

OBJ = ft_strlen.o ft_putchar.o ft_swap.o \
		 ft_putstr.o ft_strcmp.o

SRC = $(SRC_PATH)ft_strlen.c $(SRC_PATH)ft_putchar.c $(SRC_PATH)ft_swap.c \
		$(SRC_PATH)ft_putstr.c $(SRC_PATH)ft_strcmp.c

FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c -I $(HEADER) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
