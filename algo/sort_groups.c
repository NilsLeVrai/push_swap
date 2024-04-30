/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_groups.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:15:13 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/30 19:33:40 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_groups(t_index **a_stack, t_index **b_stack, int group)
{
	int		len_a;
	int 	i;

	len_a = lst_size(*a_stack);
	int max_index = find_max(a_stack);
	int max_index_2 = max_index - 1;
	int max_index_3 = max_index - 2;
	i = 0;
	while (i < group)
	{
		while (len_a--)
		{
			if ((*a_stack)->index == max_index || (*a_stack)->index == max_index_2 || (*a_stack)->index == max_index_3)
				ra(a_stack);
			else if ((*a_stack)->group == i)
				pb(a_stack, b_stack);
			else
				ra(a_stack);
		}
		i++;
		len_a = lst_size(*a_stack);
	}
}
