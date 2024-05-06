/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:47:53 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/06 17:43:32 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_index **a_stack)
{
	t_index	*tmp;
	t_index	*last;

	if (*a_stack && (*a_stack)->next)
	{
		tmp = *a_stack;
		*a_stack = (*a_stack)->next;
		last = *a_stack;
		while (last->next)
			last = last->next;
		last->next = tmp;
		tmp->next = NULL;
		ft_printf("ra\n");
	}
}
