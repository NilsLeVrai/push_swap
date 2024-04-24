/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   group.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:47:21 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/24 18:29:17 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void sort_three(t_index **a_stack)
{
	int max;              
	int min;
	int first;
	int last;
	
	max = find_max(a_stack);
	min = find_min(a_stack);
	first = (*a_stack)->index;
	last = find_last(a_stack);
	if (min == first && max == last)
		return ;
	else if (min == first)
	{
		rra(a_stack);
		sa(a_stack);
	}
	else if (max == last)
		sa(a_stack);
	else if (max == first && min == last)
	{
		sa(a_stack);
		rra(a_stack);
	}
	else if (max == first)
		ra(a_stack);
	else
		rra(a_stack);
}

void final_sort(t_index **a_stack, t_index **b_stack)
{
	(void)*b_stack;

	sort_three(a_stack);
}

