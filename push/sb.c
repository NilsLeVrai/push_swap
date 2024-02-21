/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:01:26 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/21 16:28:54 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void	sb(t_mono **b_stack)
{
	t_mono	*tmp;

	tmp = *b_stack;
	if (*b_stack && (*b_stack)->next)
	{
		*b_stack = (*b_stack)->next;
		tmp->next = (*b_stack)->next;
		(*b_stack)->next = tmp;
	}
}
