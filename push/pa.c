/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:45:49 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/22 11:02:58 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void	pa(t_mono **a_stack, t_mono **b_stack)
{
	t_mono	*temp;

	if (*b_stack == NULL)
		return ;
	temp = *b_stack;
	*b_stack = (*b_stack)->next;
	temp->next = *a_stack;
	*a_stack = temp;
	write(1, "pa\n", 3);
}
