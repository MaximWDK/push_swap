# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 14:52:30 by mleonet           #+#    #+#              #
#    Updated: 2023/10/06 16:12:24 by mleonet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = main.c \
ft_atoi.c \
ft_error.c \
ft_lists.c \
ft_push.c \
ft_reverse_rotate.c \
ft_rotate.c \
ft_sort.c \
ft_split.c \
ft_swap.c \

OBJ = ${SRC:.c=.o}

CC = gcc
CFLAGS = -Wall -Werror -Wextra -o 
REMOVE = rm -rf

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(NAME) $(SRC)

clean:
	$(REMOVE) $(OBJ)

fclean:	clean
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re