# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 10:47:50 by niabraha          #+#    #+#              #
#    Updated: 2024/02/23 17:16:50 by niabraha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES_PT1 = args_char.c \
			args_digit.c \
			args_lowerhexa.c \
			args_percent.c \
			args_pointer.c \
			args_string.c \
			args_unsigned.c \
			args_upperhexa.c \
			ft_printf_utils.c \
			ft_printf.c

NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
CC = cc
ARFLAGS = rcs

OBJ = $(FILES_PT1:.c=.o)
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