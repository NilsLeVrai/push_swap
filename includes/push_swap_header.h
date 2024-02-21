/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_header.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:35:24 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/21 16:32:06 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_HEADER_H
# define PUSH_SWAP_HEADER_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../libft/libft.h"

typedef struct poly
{
	int			data;
	struct poly	*next;
	struct poly	*prev;
}	t_mono;

struct poly	*create_linked_list(int argc, char **argv);
void		print_linked_list(struct poly *node);
void		append(struct poly **head_ref, int new_data);
void		check_args(int argc, char **argv);
void		error_check(int argc, char **argv);
void		check_duplicates(int argc, char **argv);
void		check_not_number(int argc, char **argv);
void		check_outrange_int(int argc, char **argv);

void		sa(t_mono **a_stack);
void		sb(t_mono **b_stack);

#endif
