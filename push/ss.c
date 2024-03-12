/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:43:32 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/09 21:00:51 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void	ss(t_val_index **a_stack, t_val_index **b_stack)
{
	sa(a_stack);
	sb(b_stack);
	write(1, "ss\n", 3);
}
