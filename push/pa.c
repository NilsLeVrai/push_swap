/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:45:49 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/09 21:00:51 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void	pa(t_val_index **a_stack, t_val_index **b_stack)
{
	t_val_index	*temp;

	if (*b_stack == NULL)
		return ;
	temp = *b_stack;
	*b_stack = (*b_stack)->next;
	temp->next = *a_stack;
	*a_stack = temp;
	write(1, "pa\n", 3);
}
