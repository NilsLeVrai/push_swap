/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:50:25 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/12 13:03:51 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void	rrr(t_index **a_stack, t_index **b_stack)
{
	rra(a_stack);
	rrb(b_stack);
	write(1, "rrr\n", 4);
}
