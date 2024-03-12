/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:50:14 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/12 13:03:51 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

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
		write(1, "rrb\n", 4);
	}
}
