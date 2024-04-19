/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humongus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:52:57 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/19 17:49:09 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void humongus_sort(t_index **a_stack, t_index **b_stack)
{
	t_index	*temp_a;
	t_index	*temp_b;

	temp_a = *a_stack;
	temp_b = *b_stack;
	int len_a = lst_size(temp_a);
	if (temp_b)
		write(1, "b_stack is not empty\n", 22);
	while (len_a-- > 0)
	{
		if (temp_a->group == 1)
		{
			pb(a_stack, b_stack);
			rb(b_stack);
		}
		else if (temp_a->group == 2)
		{
			pb(a_stack, b_stack);
		}
		else
		{
			ra(a_stack);
		}
		temp_a = *a_stack;
		temp_b = *b_stack;
	}
	len_a = lst_size(temp_a);
	while (len_a--)
	{
		if (temp_a->group == 3)
		{
			pb(a_stack, b_stack);
		}
		else
		{
			ra(a_stack);
		}
		temp_a = *a_stack;
		temp_b = *b_stack;
	}
	len_a = lst_size(temp_a);
	while (len_a--)
	{
		if (temp_a->group == 4)
		{
			pb(a_stack, b_stack);
		}
		else
		{
			ra(a_stack);
		}
		temp_a = *a_stack;
		temp_b = *b_stack;
	}
	///////////////////////////
	///////////////////////////
	///////////////////////////
	///////////////////////////
	///////////////////////////
	///////////////////////////
	///////////////////////////

	group_5(a_stack, b_stack);

	
/* 	while (temp_a)
	{
		if (temp_a->index != min)
			break;
		temp_a = temp_a->next;
		cost_min++;
	}
	printf("cost_min: %d\n", cost_min); */
	
}
