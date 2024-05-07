/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humongus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:52:57 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/08 01:11:06 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	humongus_sort(t_index **a_stack, t_index **b_stack)
{
	int	len_a;
	int	group;

	len_a = lst_size(*a_stack);
	if (len_a <= 10)
		group = 1;
	else if (len_a <= 100)
		group = 7;
	else
		group = 17;
	sort_groups(a_stack, b_stack, group, len_a);
	sort_three(a_stack);
	final_sort(a_stack, b_stack);
}
