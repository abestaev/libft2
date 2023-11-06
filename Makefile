# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albestae <albestae@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 20:31:16 by albestae          #+#    #+#              #
#    Updated: 2023/11/02 22:09:42 by albestae         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) -o $@ -c $< $(CFLAGS)

$(NAME) : $(OBJ)
	ar rc $@ $^

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

so :
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)
