/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baby_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:27:04 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/03 13:57:22 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/push_swap.h"

void baby_sort(t_index **a_stack)
{
	int	len_a;

	len_a = lst_size(*a_stack);
	if (len_a == 2)
		sa(a_stack);
	else if (len_a == 3)
		sort_three(a_stack);
}