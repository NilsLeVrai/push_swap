/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_header.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:35:24 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/20 15:20:29 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PUSH_SWAP_HEADER_H
# define PUSH_SWAP_HEADER_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../libft/libft.h"

typedef struct poly {
	int		value;
	struct poly	*next;
}	mono;

struct poly* create_linked_list(int argc, char* argv[]);
void add_to_list(struct poly** head_tmp, int value);
void parsing_error(int argc, char **argv);
void check_number_args(int argc);
void append(struct poly** head_ref, int new_data);
void print_linked_list(struct poly* node);
void check_args(int argc);

#endif
