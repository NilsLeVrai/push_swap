/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:27:33 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/30 17:55:29 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_last(t_index **a_stack)
{
	t_index	*temp;
	int		last;

	temp = *a_stack;
	last = (*a_stack)->index;
	while (temp)
	{
		last = temp->index;
		temp = temp->next;
	}
	return (last);
}

int	find_max(t_index **a_stack)
{
	t_index	*temp;
	int		max;

	temp = *a_stack;
	max = (*a_stack)->index;
	while (temp)
	{
		if (temp->index > max)
			max = temp->index;
		temp = temp->next;
	}
	return (max);
}

int	find_min(t_index **a_stack)
{
	t_index	*temp;
	int		min;

	temp = *a_stack;
	min = (*a_stack)->index;
	while (temp)
	{
		if (temp->index < min)
			min = temp->index;
		temp = temp->next;
	}
	return (min);
}
