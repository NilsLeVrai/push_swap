/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:35:24 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/28 18:58:34 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_index
{
	int				value;
	int				value_temp;
	int				target_pos;
	int				initial_pos;
	struct s_index	*next;
	struct s_index	*previous;
}					t_index;

//error
void			is_sorted(int argc, char **argv);
void			check_duplicates(int argc, char **argv);
void			check_not_number(int argc, char **argv);
void			check_outrange_int(int argc, char **argv);
void			check_args(int argc, char **argv);

void			print_index(struct s_index *head);
struct s_index	*create_list(int argc, char **argv);
void			error_check(int argc, char **argv);
int				lst_size(struct s_index *head);
void			sort_value_temp(struct s_index *head);

void			pa(t_index **a_stack, t_index **b_stack);
void			pb(t_index **a_stack, t_index **b_stack);
void			ra(t_index **a_stack);
void			rb(t_index **b_stack);
void			rr(t_index **a_stack, t_index **b_stack);
void			rra(t_index **a_stack);
void			rrb(t_index **b_stack);
void			rrr(t_index **a_stack, t_index **b_stack);
void			sa(t_index **a_stack);
void			sb(t_index **b_stack);
void			ss(t_index **a_stack, t_index **b_stack);

#endif
