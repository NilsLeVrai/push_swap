/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:49:18 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/06 17:43:39 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rb(t_index **b_stack)
{
	t_index	*tmp;
	t_index	*last;

	if (*b_stack && (*b_stack)->next)
	{
		tmp = *b_stack;
		*b_stack = (*b_stack)->next;
		last = *b_stack;
		while (last->next)
			last = last->next;
		last->next = tmp;
		tmp->next = NULL;
		ft_printf("rb\n");
	}
}
