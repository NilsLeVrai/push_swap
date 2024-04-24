/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:21:42 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/24 15:57:27 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/push_swap.h"

void find_sort(t_index **a_stack, t_index **b_stack)
{
	int	len;

	len = lst_size(*a_stack);
	if (len == 2)
		sa(a_stack);
	else if (len <= 10)
		baby_sort(a_stack, b_stack, len);
	else
		humongus_sort(a_stack, b_stack, len);
}