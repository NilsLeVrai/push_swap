/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:49:45 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/06 17:43:53 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_index **a_stack)
{
	t_index	*tmp;
	t_index	*last;

	tmp = *a_stack;
	if (*a_stack && (*a_stack)->next)
	{
		while (tmp->next->next)
			tmp = tmp->next;
		last = tmp->next;
		tmp->next = NULL;
		last->next = *a_stack;
		*a_stack = last;
		ft_printf("rra\n");
	}
}
