/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_groups.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:15:13 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/03 13:55:27 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int blabla(int len_a)
{
	if (len_a <= 10)
		return (0);
	else
		return (3);
}

void	sort_groups(t_index **a_stack, t_index **b_stack, int group)
{
	int	len_a;
	int	i;
	int	max;
	int bla;

	len_a = lst_size(*a_stack);
	max = find_max(a_stack);
	i = 0;
	bla = blabla(len_a);
	while (i < group)
	{
		while (len_a-- > bla)
		{
			if ((*a_stack)->index == max || (*a_stack)->index == max - 1)
				ra(a_stack);
			else if ((*a_stack)->index == max - 2)
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
