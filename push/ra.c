/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:47:53 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/21 16:48:26 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void	ra(t_mono **a_stack)
{
	t_mono	*tmp;
	t_mono	*last;

	if (*a_stack && (*a_stack)->next)
	{
		tmp = *a_stack;
		*a_stack = (*a_stack)->next;
		last = *a_stack;
		while (last->next)
			last = last->next;
		last->next = tmp;
		tmp->next = NULL;
	}
}