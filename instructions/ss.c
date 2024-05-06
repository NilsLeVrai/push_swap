/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:43:32 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/06 17:47:48 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ss(t_index **a_stack, t_index **b_stack)
{
	t_index	*tmp_a;
	t_index	*tmp_b;

	tmp_a = *a_stack;
	if (*a_stack && (*a_stack)->next)
	{
		*a_stack = (*a_stack)->next;
		tmp_a->next = (*a_stack)->next;
		(*a_stack)->next = tmp_a;
	}
	tmp_b = *b_stack;
	if (*b_stack && (*b_stack)->next)
	{
		*b_stack = (*b_stack)->next;
		tmp_b->next = (*b_stack)->next;
		(*b_stack)->next = tmp_b;
	}
	ft_printf("ss\n");
}
