/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:01:26 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/06 17:44:09 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_index **a_stack)
{
	t_index	*tmp;

	tmp = *a_stack;
	if (*a_stack && (*a_stack)->next)
	{
		*a_stack = (*a_stack)->next;
		tmp->next = (*a_stack)->next;
		(*a_stack)->next = tmp;
		ft_printf("sa\n");
	}
}
