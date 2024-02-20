/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_header.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:35:24 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/20 17:04:16 by niabraha         ###   ########.fr       */
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
void print_linked_list(struct poly* node);
void check_args(int argc);
void error_check(int argc, char **argv);
void check_duplicates(struct poly* a_stack);
void check_not_in_range(struct poly* a_stack);
void check_not_int(struct poly* a_stack);

#endif
