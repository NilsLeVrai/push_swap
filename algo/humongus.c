/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humongus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:52:57 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/19 17:22:39 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int find_max(t_index *head)
{
	t_index	*temp;
	int		max;

	temp = head;
	max = temp->index;
	while (temp)
	{
		if (temp->index > max)
			max = temp->index;
		temp = temp->next;
	}
	return (max);
}

static int find_min(t_index *head)
{
	t_index	*temp;
	int		min;

	temp = head;
	min = temp->index;
	while (temp)
	{
		if (temp->index < min)
			min = temp->index;
		temp = temp->next;
	}
	return (min);
}

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
	int max = find_max(*b_stack);
	int min = find_min(*b_stack);
	while (temp_b)
	{
		if (temp_b->index > max)
			max = temp_b->index;
		temp_b = temp_b->next;
	}
	temp_b = *b_stack;
	while (temp_b)
	{
		if (temp_b->index < min)
			min = temp_b->index;
		temp_b = temp_b->next;
	}
	///////////////////////////
	///////////////////////////
	///////////////////////////
	///////////////////////////
	///////////////////////////
	///////////////////////////

		
	
}
