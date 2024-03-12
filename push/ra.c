/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:47:53 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/09 21:00:51 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void	ra(t_val_index **a_stack)
{
	t_val_index	*tmp;
	t_val_index	*last;

	if (*a_stack && (*a_stack)->next)
	{
		tmp = *a_stack;
		*a_stack = (*a_stack)->next;
		last = *a_stack;
		while (last->next)
			last = last->next;
		last->next = tmp;
		tmp->next = NULL;
		write(1, "ra\n", 3);
	}
}
