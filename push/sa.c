/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:01:26 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/21 16:28:57 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void	sa(t_mono **a_stack)
{
	t_mono	*tmp;

	tmp = *a_stack;
	if (*a_stack && (*a_stack)->next)
	{
		*a_stack = (*a_stack)->next;
		tmp->next = (*a_stack)->next;
		(*a_stack)->next = tmp;
	}
}
