/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_header.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:35:24 by niabraha          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/03/11 18:20:59 by niabraha         ###   ########.fr       */
=======
/*   Updated: 2024/03/09 21:01:45 by niabraha         ###   ########.fr       */
>>>>>>> refs/remotes/origin/main
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_HEADER_H
# define PUSH_SWAP_HEADER_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../libft/libft.h"

typedef struct val_index
{
	struct val_index	*prev;
	int			value;
	int			index;
<<<<<<< HEAD
	struct poly	*next;
}	t_mono;
void		print_list(struct poly *head);
struct poly	*create_list(int argc, char **argv);
=======
	struct val_index	*next;
}	t_val_index;

void		print_linked_list(struct val_index *node);
struct val_index	*create_linked_list(int argc, char **argv);
>>>>>>> refs/remotes/origin/main
void		check_args(int argc, char **argv);
void		error_check(int argc, char **argv);
void		check_duplicates(int argc, char **argv);
void		check_not_number(int argc, char **argv);
void		check_outrange_int(int argc, char **argv);
<<<<<<< HEAD
void		sort(t_mono **a_stack, t_mono **b_stack);
void		sort_index(struct poly **head);
=======
void		sort(t_val_index **a_stack, t_val_index **b_stack);
void 		sort_index(struct val_index **head);
>>>>>>> refs/remotes/origin/main

void		pa(t_val_index **a_stack, t_val_index **b_stack);
void		pb(t_val_index **a_stack, t_val_index **b_stack);
void		ra(t_val_index **a_stack);
void		rb(t_val_index **b_stack);
void		rr(t_val_index **a_stack, t_val_index **b_stack);
void		rra(t_val_index **a_stack);
void		rrb(t_val_index **b_stack);
void		rrr(t_val_index **a_stack, t_val_index **b_stack);
void		sa(t_val_index **a_stack);
void		sb(t_val_index **b_stack);
void		ss(t_val_index **a_stack, t_val_index **b_stack);

#endif
