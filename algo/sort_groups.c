/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_groups.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:15:13 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/06 20:27:18 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_groups(t_index **a_stack, t_index **b_stack, int group, int len_a)
{
	int	i;

	i = 0;
	while (i < group)
	{
		while (len_a-- != 3)
		{
			if ((*a_stack)->index == find_max(a_stack) || \
			(*a_stack)->index == find_max(a_stack) - 1)
				ra(a_stack);
			else if ((*a_stack)->index == find_max(a_stack) - 2)
				ra(a_stack);
			if ((*a_stack)->group == (i + 1) && i % 2 == 0)
			{
				pb(a_stack, b_stack);
				rb(b_stack);
			}
			else if ((*a_stack)->group == i && i % 2 == 0)
				pb(a_stack, b_stack);
			else
				ra(a_stack);
		}
		len_a = lst_size(*a_stack);
		i += 2;
	}
}
