# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 14:52:30 by mleonet           #+#    #+#              #
#    Updated: 2023/10/24 15:03:48 by mleonet          ###   ########.fr        #
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
ft_initialize.c \
ft_check.c \

OBJ = ${SRC:.c=.o}

CC = gcc
CFLAGS = -Wall -Werror -Wextra -o 
RM = rm -rf

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(NAME) $(SRC)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re