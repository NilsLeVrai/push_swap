/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humongus_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:37:51 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/03 12:46:43 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/push_swap.h"

void humongus_sort(t_index **a_stack, t_index **b_stack, int group)
{
	sort_groups(a_stack, b_stack, group);
	sort_three(a_stack);
	last_sort(a_stack, b_stack);
}