# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 14:25:31 by niabraha          #+#    #+#              #
#    Updated: 2024/05/08 01:19:54 by niabraha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_P = push_swap

_SRCS_A = baby_sort.c \
			final_sort.c \
			find_sort.c \
			humongus.c \
			sort_groups.c \
			sort_three.c

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

_SRCS_F = args_char.c \
			args_digit.c \
			args_lowerhexa.c \
			args_percent.c \
			args_pointer.c \
			args_string.c \
			args_unsigned.c \
			args_upperhexa.c \
			ft_printf.c \
			ft_printf_utils.c
			

_SRCS_U = free_lst_utils.c \
			lst_utils.c \
			push_swap_utils.c 

SRCS_A_DIR = algo
SRCS_E_DIR = errors
SRCS_F_DIR = ft_printf
SRCS_I_DIR = instructions
SRCS_P_DIR = push
SRCS_U_DIR = utils

SRCS_A = $(addprefix $(SRCS_A_DIR)/, $(_SRCS_A))
SRCS_E = $(addprefix $(SRCS_E_DIR)/, $(_SRCS_E))
SRCS_F = $(addprefix $(SRCS_F_DIR)/, $(_SRCS_F))
SRCS_I = $(addprefix $(SRCS_I_DIR)/, $(_SRCS_I))
SRCS_P = $(addprefix $(SRCS_P_DIR)/, $(_SRCS_P))
SRCS_U = $(addprefix $(SRCS_U_DIR)/, $(_SRCS_U))

SRCO_A = $(SRCS_A:.c=.o)
SRCO_E = $(SRCS_E:.c=.o)
SRCO_F = $(SRCS_F:.c=.o)
SRCO_I = $(SRCS_I:.c=.o)
SRCO_P = $(SRCS_P:.c=.o)
SRCO_U = $(SRCS_U:.c=.o)

FLAG = -Wall -Wextra -Werror
INC = -I includes/

all : $(NAME_C) $(NAME_P)

SRCO_A = $(SRCS_A:.c=.o)
SRCO_E = $(SRCS_E:.c=.o)
SRCO_F = $(SRCS_F:.c=.o)
SRCO_I = $(SRCS_I:.c=.o)
SRCO_P = $(SRCS_P:.c=.o)
SRCO_U = $(SRCS_U:.c=.o)

$(NAME_P) : $(SRCO_A) $(SRCO_E) $(SRCO_F) $(SRCO_I) $(SRCO_P) $(SRCO_U)
	gcc -o $(NAME_P) $(SRCO_A) $(SRCO_E) $(SRCO_F) $(SRCO_I) $(SRCO_P) $(SRCO_U)

%.o : %.c
	gcc $(FLAG) -c $< -o $@ $(INC)

clean :
	/bin/rm -f $(SRCO_A)
	/bin/rm -f $(SRCO_E)
	/bin/rm -f $(SRCO_F)
	/bin/rm -f $(SRCO_I)
	/bin/rm -f $(SRCO_P)
	/bin/rm -f $(SRCO_U)

fclean : clean
	/bin/rm -f $(SRCO_A)
	/bin/rm -f $(SRCO_E)
	/bin/rm -f $(SRCO_F)
	/bin/rm -f $(SRCO_I)
	/bin/rm -f $(NAME_P)
	/bin/rm -f $(SRCO_U)

re :
	make fclean
	make
