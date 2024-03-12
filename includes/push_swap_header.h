/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_header.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:35:24 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/12 15:06:17 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_HEADER_H
# define PUSH_SWAP_HEADER_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../libft/libft.h"

typedef struct s_index
{
	struct s_index	*prev;
	int				value;
	int				index;
	struct s_index	*next;
}	t_index;

void			print_index(struct s_index *head);
struct s_index	*create_list(int argc, char **argv);
void			error_check(int argc, char **argv);
int 			lst_size(struct s_index *head);
void 			sort_index(struct s_index *head);


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
