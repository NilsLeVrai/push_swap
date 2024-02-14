# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 10:47:50 by niabraha          #+#    #+#              #
#    Updated: 2024/02/14 16:28:29 by niabraha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ft_atoi.c \
			main.c \
			parsing_error.c 

NAME = pushswap
CFLAGS = -Wall -Werror -Wextra
CC = gcc
ARFLAGS = rcs

OBJ = $(FILES:.c=.o) $(FILES:.c=.o) 
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