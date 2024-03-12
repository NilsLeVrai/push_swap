/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:01:26 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/09 21:00:51 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void	sa(t_val_index **a_stack)
{
	t_val_index	*tmp;

	tmp = *a_stack;
	if (*a_stack && (*a_stack)->next)
	{
		*a_stack = (*a_stack)->next;
		tmp->next = (*a_stack)->next;
		(*a_stack)->next = tmp;
		write(1, "sa\n", 3);
	}
}
