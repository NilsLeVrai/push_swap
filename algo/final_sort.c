/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:24:14 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/30 14:28:33 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void find_ra_or_rra(t_index **a_stack, t_index **b_stack)
{
	t_index *tmp = *a_stack;
	int len_a = lst_size(*a_stack);
	int cost = 0;
	//printf("index_a = %d\n", tmp->index);
	//printf("index_b = %d\n", (*b_stack)->index);
	while (tmp->index <  (*b_stack)->index)
	{
		tmp = tmp->next;
		cost++;
	}
	int cost2 = len_a - cost;
	//printf("cost = %d\n", cost);
	if (cost < len_a/2)
	{
		while (cost--)
			ra(a_stack);
	}
	else
	{
		while (cost2--)
			rra(a_stack);
	}
}
void print_index(t_index *a_stack, t_index *b_stack)
{
	t_index *tmp = a_stack;
	t_index *tmp2 = b_stack;
	while (tmp)
	{
		printf("index_a = %d     index_b = %d\n", tmp->index, tmp2->index);
		tmp = tmp->next;
		tmp2 = tmp2->next;
	}
}

void	final_sort(t_index **a_stack, t_index **b_stack)
{
	int len_b = lst_size(*b_stack);
	while (len_b--)
	{
		int max = find_max(a_stack);
		if ((*b_stack)->index > max) // si (*b_stack)->index plus grand que tous les autres de la stack_a
		{
			pa(a_stack, b_stack);
			ra(a_stack);
			continue ;
		}
		else if ((*a_stack)->index > (*b_stack)->index)
			pa(a_stack, b_stack);
		else if ((*a_stack)->index < (*b_stack)->index)
		{
			//test(a_stack, b_stack);
			find_ra_or_rra(a_stack, b_stack);
			pa(a_stack, b_stack);
		}
		int last = find_last(a_stack);
		while (last < (*a_stack)->index)
		{
			rra(a_stack);
			last = find_last(a_stack);
		}
	}
}

