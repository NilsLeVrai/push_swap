/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:45:49 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/06 17:42:14 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_index **a_stack, t_index **b_stack)
{
	t_index	*temp;

	if (*b_stack == NULL)
		return ;
	temp = *b_stack;
	*b_stack = (*b_stack)->next;
	temp->next = *a_stack;
	*a_stack = temp;
	ft_printf("pa\n");
}
