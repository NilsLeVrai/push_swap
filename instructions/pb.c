/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:47:19 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/06 17:42:00 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pb(t_index **a_stack, t_index **b_stack)
{
	t_index	*temp;

	if (*a_stack == NULL)
		return ;
	temp = *a_stack;
	*a_stack = (*a_stack)->next;
	temp->next = *b_stack;
	*b_stack = temp;
	ft_printf("pb\n");
}
