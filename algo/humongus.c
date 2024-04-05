/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humongus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:52:57 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/04 22:49:02 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void humongus_sort(t_index **a_stack, t_index **b_stack)
{
	t_index	*temp_a;
	t_index	*temp_b;

	temp_a = *a_stack;
	temp_b = *b_stack;
	int len = lst_size(temp_a);
	while (len/2 < len)
	{
		if (temp_a->quartile == 1)
		{
			pb(a_stack, b_stack);
			temp_b = *b_stack;
			temp_b->quartile = 1;
			if (temp_b->next)
			{
				if (temp_b->next->quartile != 1)
					rb(b_stack);
			}
		}
		else if (temp_a->quartile == 2)
		{
			pb(a_stack, b_stack);
			temp_b = *b_stack;
			temp_b->quartile = 2;
		}
		else 
			ra(a_stack);
		temp_a = *a_stack;
		len--;
	}
	temp_b = *b_stack;

	int len_b = lst_size(temp_b);
	while (len_b/2 < len_b)
	{
		if (temp_a->quartile == 3)
		{
			pb(a_stack, b_stack);
			temp_b = *b_stack;
			temp_b->quartile = 3;
		}
		else 
			ra(a_stack);
		temp_a = *a_stack;
		len_b--;
	}
	temp_b = *b_stack;

////////////////////////
	// 4 groupes fait
	//////////////////

}