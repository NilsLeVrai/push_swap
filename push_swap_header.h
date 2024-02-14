/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:35:24 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/14 16:15:10 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PUSH_SWAP_HEADER_H
# define PUSH_SWAP_HEADER_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct poly {
	int		value;
	struct poly	*next;
}	mono;

int	ft_atoi(const char *nptr);
struct poly* ft_create_list(int argc, char **argv);
void add_to_list(struct poly** head_tmp, int value);
void parsing_error(int argc, char **argv);
void check_number_args(int argc);

#endif
