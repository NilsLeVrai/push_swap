/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humongus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:52:57 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/16 20:51:13 by niabraha         ###   ########.fr       */
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
	int len_b;
	printf("len = %d\n", len);
	if (temp_b)
	{
		write(1, "blabla\n", 7);
	}
	int cost = 0;
	while (len_a > 0)
	{
		if (temp_a->group == 1)
		{
			pb(a_stack, b_stack);
			rb(b_stack);
		}
		else if (temp_a->group == 2)
		{
			pb(a_stack, b_stack);
			len_b = lst_size(temp_b);
			while (temp_b && temp_b->group != 1)
			{
				cost++;
				temp_b = temp_b->next;
			}
			temp_b = *b_stack;
			if (cost > len_b / 2)
			{
				while (temp_b->group != 1)
				{
					rrb(b_stack);
				}
			}
			else
			{
				while (temp_b->group != 1)
				{
					rb(b_stack);
				}
			}
		}
		else if (temp_a->group == 4)
		{
			pb(a_stack, b_stack);
		}
		else
		{
			ra(a_stack);
		}
		temp_a = *a_stack;
		len_a--;
	}
}
