/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_lst_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 12:37:56 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/01 01:55:40 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_lst(t_index **a_stack, t_index **b_stack)
{
	t_index	*tmp;

	while (*a_stack)
	{
		tmp = *a_stack;
		*a_stack = (*a_stack)->next;
		free(tmp);
	}
	while (*b_stack)
	{
		tmp = *b_stack;
		*b_stack = (*b_stack)->next;
		free(tmp);
	}
	a_stack = NULL;
	b_stack = NULL;
}
