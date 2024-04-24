/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_groups.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:15:13 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/24 19:28:11 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_groups(t_index **a_stack, t_index **b_stack)
{
	int	len_a;

	len_a = lst_size(*a_stack);
	while (len_a-- > 0)
	{
		if ((*a_stack)->group == 1)
		{
			pb(a_stack, b_stack);
			rb(b_stack);
		}
		else if ((*a_stack)->group == 2)
			pb(a_stack, b_stack);
		else
			ra(a_stack);
	}
	len_a = lst_size(*a_stack);
	while (len_a--)
	{
		if ((*a_stack)->group == 3)
			pb(a_stack, b_stack);
		else
			ra(a_stack);
	}
	len_a = lst_size(*a_stack);
	while (len_a--)
	{
		if ((*a_stack)->group == 4)
			pb(a_stack, b_stack);
		else
			ra(a_stack);
	}
	len_a = lst_size(*a_stack);
	while (len_a-- != 3)
	{
		if ((*a_stack)->group == 5)
			pb(a_stack, b_stack);
		else
			ra(a_stack);
	}
}
