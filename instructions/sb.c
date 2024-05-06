/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:01:26 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/06 17:44:14 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sb(t_index **b_stack)
{
	t_index	*tmp;

	tmp = *b_stack;
	if (*b_stack && (*b_stack)->next)
	{
		*b_stack = (*b_stack)->next;
		tmp->next = (*b_stack)->next;
		(*b_stack)->next = tmp;
		ft_printf("sb\n");
	}
}
