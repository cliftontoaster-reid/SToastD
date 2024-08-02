# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfiorell <lfiorell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2001/08/02 11:21:12 by lfiorell          #+#    #+#              #
#    Updated: 2024/08/02 12:15:55 by lfiorell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = stastd.a
CC = gcc
INC = include/
CFLAGS = -Wall -Wextra -Werror $(addprefix "-I", $(INC))

SRC = $(shell find -type f -name "*.c")
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

.c.o:
	$(CC) -c $< $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
