/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:24:14 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/26 18:59:32 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	final_sort(t_index **a_stack, t_index **b_stack)
{
	int len_b = lst_size(*b_stack);
	int cost = 0;
	while (len_b--)
	{
		int max = find_max(a_stack);
		if ((*b_stack)->index > max) // si (*b_stack)->index plus grand que tous les autres de la stack_a
		{
			pa(a_stack, b_stack);
			ra(a_stack);
			continue ;
		}
		else if ((*a_stack)->index > (*b_stack)->index)
			pa(a_stack, b_stack);
		else if ((*a_stack)->index < (*b_stack)->index)
		{
			while ((*a_stack)->index < (*b_stack)->index)
			{
				ra(a_stack);
				cost++;
			}
			pa(a_stack, b_stack);
			while (cost--)
			{
				rra(a_stack);
			}
			cost = 0;
		}
		rb(b_stack);
	}
}

