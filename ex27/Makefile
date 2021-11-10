# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngardzie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 08:30:08 by ngardzie          #+#    #+#              #
#    Updated: 2021/11/03 14:13:43 by ngardzie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC_PATH = ./srcs/

SRC = $(SRC_PATH)display_file.c

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRC)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)
	

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
