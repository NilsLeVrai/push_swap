/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humongus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:52:57 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/16 18:44:54 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void humongus_sort(t_index **a_stack, t_index **b_stack)
{
	t_index	*temp_a;
	t_index	*temp_b;

	temp_a = *a_stack;
	temp_b = *b_stack;
	while (temp_a)
	{
		if (temp_a->group == 1)
			pb(a_stack, b_stack);
		else if (temp_a->group == 2)
			ra(a_stack);
		else if (temp_a->group == 3)
			rra(a_stack);
		else if (temp_a->group == 4)
		{
			pb(a_stack, b_stack);
			ra(a_stack);
		}
		else
		{
			pb(a_stack, b_stack);
			rra(a_stack);
		}
		else
			ra(a_stack);
		temp_a = *a_stack;
		temp_a = temp_a->next;
	}
}
