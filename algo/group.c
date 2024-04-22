/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   group.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:47:21 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/22 23:03:16 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int find_max(t_index *head)
{
	t_index	*temp;
	int		max;

	temp = head;
	max = temp->index;
	while (temp)
	{
		if (temp->index > max)
			max = temp->index;
		temp = temp->next;
	}
	return (max);
}
    
void final_sort(t_index **a_stack, t_index **b_stack)
{
    t_index *temp_a;
    t_index *temp_b;
    int     max;

    temp_a = *a_stack;
    temp_b = *b_stack;
    if (temp_b)
        printf("b_stack is not empty\n");
    printf("eqwsdrxftcgyhvbjnk,l;swdxcfgvh\n");
    max = find_max(temp_a);
    write(1, "max: ", 5);
    printf("max: %d\n", max);
}
