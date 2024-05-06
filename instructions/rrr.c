/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:50:25 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/06 17:50:09 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rrr(t_index **a_stack, t_index **b_stack)
{
	t_index	*tmp;
	t_index	*last;

	tmp = *a_stack;
	if (*a_stack && (*a_stack)->next)
	{
		while (tmp->next->next)
			tmp = tmp->next;
		last = tmp->next;
		tmp->next = NULL;
		last->next = *a_stack;
		*a_stack = last;
	}
	tmp = *b_stack;
	if (*b_stack && (*b_stack)->next)
	{
		while (tmp->next->next)
			tmp = tmp->next;
		last = tmp->next;
		tmp->next = NULL;
		last->next = *b_stack;
		*b_stack = last;
	}
	ft_printf("rrr\n");
}
