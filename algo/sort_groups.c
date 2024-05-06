/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_groups.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:15:13 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/06 17:06:03 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* void sort_max(t_index **a_stack, t_index **b_stack, int max)
{
	int max;

	max = find_max(a_stack);
	while ((*a_stack)->index != max)
		ra(a_stack);
	pb(a_stack, b_stack);
} */

void	sort_groups(t_index **a_stack, t_index **b_stack, int group)
{
	int	len_a;
	int	i;
	int	max;

	len_a = lst_size(*a_stack);
	max = find_max(a_stack);
	i = 0;
	int j = 1;
	while (i < group)
	{
		while (len_a-- != 3)
		{
			if ((*a_stack)->index == max || (*a_stack)->index == max - 1)
				ra(a_stack);
			else if ((*a_stack)->index == max - 2)
				ra(a_stack);
			if ((*a_stack)->group == j && i % 2 == 0)
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
		j += 2;
	}
}

/*
4
2
1
3
5
*/
