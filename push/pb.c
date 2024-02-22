/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:47:19 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/22 11:02:55 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void	pb(t_mono **a_stack, t_mono **b_stack)
{
	t_mono	*tmp;

	if (*a_stack)
	{
		tmp = *a_stack;
		*a_stack = (*a_stack)->next;
		tmp->next = *b_stack;
		*b_stack = tmp;
		write(1, "pb\n", 3);
	}
}
