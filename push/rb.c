/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:49:18 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/09 21:00:51 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void	rb(t_val_index **b_stack)
{
	t_val_index	*tmp;

	tmp = *b_stack;
	if (*b_stack && (*b_stack)->next)
	{
		*b_stack = (*b_stack)->next;
		tmp->next = (*b_stack)->next;
		(*b_stack)->next = tmp;
		write(1, "rb\n", 3);
	}
}
