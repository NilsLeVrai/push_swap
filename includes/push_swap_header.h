/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_header.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:35:24 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/07 18:09:24 by niabraha         ###   ########.fr       */
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
	struct poly	*prev;
	int			value;
	int			index;
	struct poly	*next;
}	t_mono;

int			lstsize(struct poly *node);
int			find_lstmax(t_mono *lst);
int			find_lstmin(t_mono *lst);
struct poly	*create_linked_list(int argc, char **argv);
void		print_linked_list(struct poly *node);
void		append(struct poly **head_ref, int new_data);
void		check_args(int argc, char **argv);
void		error_check(int argc, char **argv);
void		check_duplicates(int argc, char **argv);
void		check_not_number(int argc, char **argv);
void		check_outrange_int(int argc, char **argv);
void		sort(t_mono **a_stack, t_mono **b_stack);
void 		sort_index(struct poly **head);

void		pa(t_mono **a_stack, t_mono **b_stack);
void		pb(t_mono **a_stack, t_mono **b_stack);
void		ra(t_mono **a_stack);
void		rb(t_mono **b_stack);
void		rr(t_mono **a_stack, t_mono **b_stack);
void		rra(t_mono **a_stack);
void		rrb(t_mono **b_stack);
void		rrr(t_mono **a_stack, t_mono **b_stack);
void		sa(t_mono **a_stack);
void		sb(t_mono **b_stack);
void		ss(t_mono **a_stack, t_mono **b_stack);

#endif
