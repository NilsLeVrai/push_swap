/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:24:14 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/30 16:13:37 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void find_rb_or_rrb(t_index **b_stack, int max_b)
{
	t_index *tmp;
	int		len_b;
	int		cost;
	int		cost2;
	
	tmp = *b_stack;
	len_b = lst_size(*b_stack);
	cost = 0;
	while (tmp->index <  max_b)
	{
		tmp = tmp->next;
		cost++;
	}
	cost2 = len_b - cost;
	if (cost < len_b/2)
	{
		while (cost--)
			rb(b_stack);
	}
	else
	{
		while (cost2--)
			rrb(b_stack);
	}
}

void	final_sort(t_index **a_stack, t_index **b_stack)
{
	int len_b;
	int max_b;
	
	len_b = lst_size(*b_stack);
	max_b = find_max(b_stack);
	while (len_b--)
	{
		max_b = find_max(b_stack);
		find_rb_or_rrb(b_stack, max_b);
		pa(a_stack, b_stack);
	}
}


/*
trouver le max dans b_stack
faire rb ou rrb, push a
*/

