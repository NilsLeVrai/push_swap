/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:47:19 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/04 18:24:22 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pb(t_index **a_stack, t_index **b_stack)
{
	t_index	*tmp_a;
	
	if (*a_stack)
	{
		tmp_a = *a_stack;
		*a_stack = (*a_stack)->next;
		tmp_a->next = *b_stack;
		*b_stack = tmp_a;
		write(1, "pb\n", 3);
	}
}
