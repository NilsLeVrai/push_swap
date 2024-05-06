/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:50:14 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/06 17:43:57 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rrb(t_index **b_stack)
{
	t_index	*tmp;
	t_index	*tmp2;

	tmp = *b_stack;
	if (*b_stack && (*b_stack)->next)
	{
		while (tmp->next->next)
			tmp = tmp->next;
		tmp2 = tmp->next;
		tmp->next = NULL;
		tmp2->next = *b_stack;
		*b_stack = tmp2;
		ft_printf("rrb\n");
	}
}
