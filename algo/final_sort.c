/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:24:14 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/30 23:22:11 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	rb_routine(t_index **a_stack, t_index **b_stack, int max_b)
{
	while ((*b_stack)->index != max_b)
	{
		if ((*b_stack)->index == max_b - 1)
			pa(a_stack, b_stack);
		else
			rb(b_stack);
	}
}

static void	rrb_routine(t_index **a_stack, t_index **b_stack, int max_b)
{
	while ((*b_stack)->index != max_b)
	{
		if ((*b_stack)->index == max_b - 1)
			pa(a_stack, b_stack);
		else
			rrb(b_stack);
	}
}

static void	find_rb_or_rrb(t_index **a_stack, t_index **b_stack, int max_b)
{
	t_index	*tmp;
	int		len_b;
	int		cost;

	tmp = *b_stack;
	len_b = lst_size(*b_stack);
	cost = 0;
	while (tmp->index < max_b)
	{
		tmp = tmp->next;
		cost++;
	}
	if (cost < len_b / 2)
		rb_routine(a_stack, b_stack, max_b);
	else
		rrb_routine(a_stack, b_stack, max_b);
}

void	final_sort(t_index **a_stack, t_index **b_stack)
{
	int	len_b;
	int	max_b;

	len_b = lst_size(*b_stack);
	while (len_b--)
	{
		max_b = find_max(b_stack);
		find_rb_or_rrb(a_stack, b_stack, max_b);
		pa(a_stack, b_stack);
		if ((*a_stack)->index == ((*a_stack)->next->index + 1))
			sa(a_stack);
	}
}
