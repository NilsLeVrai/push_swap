/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_groups.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:15:13 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/08 01:16:37 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	sort_last_group(t_index **a_stack, t_index **b_stack)
{
	int	len_a;
	int	max;

	len_a = lst_size(*a_stack);
	max = find_max(a_stack);
	while (len_a-- != 3)
	{
		if ((*a_stack)->index == max || (*a_stack)->index == max - 1)
			ra(a_stack);
		else if ((*a_stack)->index == max - 2)
			ra(a_stack);
		else
			pb(a_stack, b_stack);
		len_a = lst_size(*a_stack);
	}
}

void	sort_groups(t_index **a_stack, t_index **b_stack, int group, int len_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j++ < group / 2)
	{
		while (len_a--)
		{
			if ((*a_stack)->group == i + 1)
			{
				pb(a_stack, b_stack);
				rb(b_stack);
			}
			else if ((*a_stack)->group == i)
				pb(a_stack, b_stack);
			else
				ra(a_stack);
		}
		len_a = lst_size(*a_stack);
		i += 2;
	}
	sort_last_group(a_stack, b_stack);
}
