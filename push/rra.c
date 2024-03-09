/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:49:45 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/09 21:00:51 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void	rra(t_val_index **a_stack)
{
	t_val_index	*tmp;
	t_val_index	*last;

	tmp = *a_stack;
	if (*a_stack && (*a_stack)->next)
	{
		while (tmp->next->next)
			tmp = tmp->next;
		last = tmp->next;
		tmp->next = NULL;
		last->next = *a_stack;
		*a_stack = last;
		write(1, "rra\n", 4);
	}
}
