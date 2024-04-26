/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:24:14 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/26 17:29:32 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	final_sort(t_index **a_stack, t_index **b_stack)
{
	(void)*a_stack;
	(void)*b_stack;
	
	printf("(*a_stack)->index = %d\n", (*a_stack)->index);
	printf("(*a_stack)->next->index = %d\n", (*a_stack)->next->index);
	printf("(*a_stack)->next->next->index = %d\n", (*a_stack)->next->next->index);
	printf("(*b_stack)->index = %d\n", (*b_stack)->index);
	printf("(*b_stack)->next->index = %d\n", (*b_stack)->next->index);
	ra(a_stack);
	printf("(*a_stack)->index = %d\n", (*a_stack)->index);
	printf("(*a_stack)->next->index = %d\n", (*a_stack)->next->index);
	printf("(*a_stack)->next->next->index = %d\n", (*a_stack)->next->next->index);
	printf("(*b_stack)->index = %d\n", (*b_stack)->index);
	printf("(*b_stack)->next->index = %d\n", (*b_stack)->next->index);
	pa(a_stack, b_stack);
	printf("(*a_stack)->index = %d\n", (*a_stack)->index);
	printf("(*a_stack)->next->index = %d\n", (*a_stack)->next->index);
	printf("(*a_stack)->next->next->index = %d\n", (*a_stack)->next->next->index);
	printf("(*b_stack)->index = %d\n", (*b_stack)->index);
	printf("(*b_stack)->next->index = %d\n", (*b_stack)->next->index);
}

