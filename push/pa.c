/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:45:49 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/21 16:46:21 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void	pa(t_mono **a_stack, t_mono **b_stack)
{
	t_mono	*tmp;

	if (*b_stack)
	{
		tmp = *b_stack;
		*b_stack = (*b_stack)->next;
		tmp->next = *a_stack;
		*a_stack = tmp;
	}
}