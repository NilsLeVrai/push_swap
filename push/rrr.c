/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:50:25 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/22 11:02:03 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void	rrr(t_mono **a_stack, t_mono **b_stack)
{
	rra(a_stack);
	rrb(b_stack);
	write(1, "rrr\n", 4);
}
