/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:47:19 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/28 16:53:50 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pb(t_index **a_stack, t_index **b_stack)
{
	t_index	*tmp;

	if (*a_stack)
	{
		tmp = *a_stack;
		*a_stack = (*a_stack)->next;
		tmp->next = *b_stack;
		*b_stack = tmp;
		write(1, "pb\n", 3);
	}
}
