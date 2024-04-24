/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:35:24 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/24 18:28:35 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_index
{
	int				value;
	int				value_temp;
	int				index;
	int				group;
	int				index_temp;
	struct s_index	*next;
	struct s_index	*previous;
}					t_index;


void final_sort(t_index **a_stack, t_index **b_stack);
void humongus_sort(t_index **a_stack, t_index **b_stack);
void check_infinite_loop(); // A ENLEVER

//////////////////////////////////////////
////    ___ _ __ _ __ ___  _ __ ___   ////
////   / _ \ '__| '__/ _ \| '__/ __|  ////
////  |  __/ |  | | | (_) | |  \__ \  ////
////   \___|_|  |_|  \___/|_|  |___/  ////
//////////////////////////////////////////

void	check_args(int argc, char **argv);
void	check_duplicates(int argc, char **argv);
void	check_not_number(int argc, char **argv);
void	check_outrange_int(int argc, char **argv);
void	error_check(int argc, char **argv);
void	is_sorted(int argc, char **argv);

///////////////////////////////////////////////////////////////////
////   _           _                   _   _                   ////
////  (_)         | |                 | | (_)                  ////
////   _ _ __  ___| |_ _ __ _   _  ___| |_ _  ___  _ __  ___   ////
////  | | '_ \/ __| __| '__| | | |/ __| __| |/ _ \| '_ \/ __|  ////
////  | | | | \__ \ |_| |  | |_| | (__| |_| | (_) | | | \__ \  ////
////  |_|_| |_|___/\__|_|   \__,_|\___|\__|_|\___/|_| |_|___/  ////
///////////////////////////////////////////////////////////////////

void	pa(t_index **a_stack, t_index **b_stack);
void	pb(t_index **a_stack, t_index **b_stack);
void	ra(t_index **a_stack);
void	rb(t_index **b_stack);
void	rr(t_index **a_stack, t_index **b_stack);
void	rra(t_index **a_stack);
void	rrb(t_index **b_stack);
void	rrr(t_index **a_stack, t_index **b_stack);
void	sa(t_index **a_stack);
void	sb(t_index **b_stack);
void	ss(t_index **a_stack, t_index **b_stack);

///////////////////////////////////
////                   _       ////
////                  | |      ////
////   _ __  _   _ ___| |__    ////
////  | '_ \| | | / __| '_ \   ////
////  | |_) | |_| \__ \ | | |  ////
////  | .__/ \__,_|___/_| |_|  ////
////  | |                      ////
////  |_|                      ////
///////////////////////////////////

t_index	*create_list(int argc, char **argv);
void	error_check(int argc, char **argv);
void	sort_value_temp(struct s_index *head);
void	print_index(struct s_index *head);

///////////////////////////////
////         _   _ _       ////
////        | | (_) |      ////
////   _   _| |_ _| |___   ////
////  | | | | __| | / __|  ////
////  | |_| | |_| | \__ \  ////
////   \__,_|\__|_|_|___/  ////
///////////////////////////////

int 	bool_sorted(t_index *head);
int 	find_last(t_index **a_stack);
int 	find_max(t_index **a_stack);
int 	find_min(t_index **a_stack);
int		ft_atoi(const char *nptr);
int		ft_isdigit(int c);
int		lst_size(struct s_index *head);
long	ft_atol(const char *nptr);
void	free_lst(t_index *a_stack, t_index *b_stack);

#endif
