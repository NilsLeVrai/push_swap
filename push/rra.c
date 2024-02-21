/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:49:45 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/21 16:49:55 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void	rra(t_mono **a_stack)
{
	t_mono	*tmp;
	t_mono	*last;

	tmp = *a_stack;
	if (*a_stack && (*a_stack)->next)
	{
		while (tmp->next->next)
			tmp = tmp->next;
		last = tmp->next;
		tmp->next = NULL;
		last->next = *a_stack;
		*a_stack = last;
	}
}