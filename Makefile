# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 14:25:31 by niabraha          #+#    #+#              #
#    Updated: 2024/04/02 17:56:19 by niabraha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_C = checker
NAME_P = push_swap

_SRCS_A = humongus.c

_SRCS_C = main.c

_SRCS_P = create_list.c \
			push_swap.c

_SRCS_E = checking_errors.c \
			error_check_utils.c

_SRCS_I = pa.c \
			pb.c \
			ra.c \
			rb.c \
			rr.c \
			rra.c \
			rrb.c \
			rrr.c \
			sa.c \
			sb.c \
			ss.c

_SRCS_U = free_lst_utils.c \
			push_swap_utils.c 

SRCS_A_DIR = algo
SRCS_C_DIR = check
SRCS_P_DIR = push
SRCS_E_DIR = errors
SRCS_I_DIR = instructions
SRCS_U_DIR = utils

SRCS_A = $(addprefix $(SRCS_A_DIR)/, $(_SRCS_A))
SRCS_C = $(addprefix $(SRCS_C_DIR)/, $(_SRCS_C))
SRCS_P = $(addprefix $(SRCS_P_DIR)/, $(_SRCS_P))
SRCS_E = $(addprefix $(SRCS_E_DIR)/, $(_SRCS_E))
SRCS_I = $(addprefix $(SRCS_I_DIR)/, $(_SRCS_I))
SRCS_U = $(addprefix $(SRCS_U_DIR)/, $(_SRCS_U))

SRCO_A = $(SRCS_A:.c=.o)
SRCO_C = $(SRCS_C:.c=.o)
SRCO_P = $(SRCS_P:.c=.o)
SRCO_E = $(SRCS_E:.c=.o)
SRCO_I = $(SRCS_I:.c=.o)
SRCO_U = $(SRCS_U:.c=.o)

FLAG = -Wall -Wextra -Werror
INC = -I includes/

all : $(NAME_C) $(NAME_P)

SRCO_A = $(SRCS_A:.c=.o)
SRCO_C = $(SRCS_C:.c=.o)
SRCO_P = $(SRCS_P:.c=.o)
SRCO_E = $(SRCS_E:.c=.o)
SRCO_I = $(SRCS_I:.c=.o)
SRCO_U = $(SRCS_U:.c=.o)

$(NAME_C) : $(SRCO_C) $(SRCO_I) $(SRCO_E) $(SRCO_U) $(SRCO_A)
	gcc -o $(NAME_C) $(SRCO_C) $(SRCO_I) $(SRCO_E) $(SRCO_U) $(SRCO_A)

$(NAME_P) : $(SRCO_P) $(SRCO_I) $(SRCO_E) $(SRCO_U) $(SRCO_A)
	gcc -o $(NAME_P) $(SRCO_P) $(SRCO_I) $(SRCO_E) $(SRCO_U) $(SRCO_A)

%.o : %.c
	gcc $(FLAG) -c $< -o $@ $(INC)

clean :
	/bin/rm -f $(SRCO_A)
	/bin/rm -f $(SRCO_C)
	/bin/rm -f $(SRCO_P)
	/bin/rm -f $(SRCO_I)
	/bin/rm -f $(SRCO_E)
	/bin/rm -f $(SRCO_U)

fclean : clean
	/bin/rm -f $(SRCO_A)
	/bin/rm -f $(NAME_C)
	/bin/rm -f $(NAME_P)
	/bin/rm -f $(SRCO_I)
	/bin/rm -f $(SRCO_E)
	/bin/rm -f $(SRCO_U)

re :
	make fclean
	make
