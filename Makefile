# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 10:47:50 by niabraha          #+#    #+#              #
#    Updated: 2024/02/06 15:28:51 by niabraha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = parsing_error.c \
		pipex.c \
		ft_atoi.c 

NAME = push_swap
CFLAGS = -Wall -Werror -Wextra
CC = cc
ARFLAGS = rcs

OBJ = $(FILES:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re