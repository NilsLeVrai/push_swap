/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   group.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:47:21 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/23 02:30:28 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* static int  find_min(t_index *b_stack)
{
    t_index *temp;
    int     min;

    temp = b_stack;
    min = temp->index;
    while (temp)
    {
        if (temp->index < min)
            min = temp->index;
        temp = temp->next;
    }
    return (min);
} */
    
void final_sort(t_index **a_stack, t_index **b_stack)
{
    t_index *temp_a;
    t_index *temp_b;
    int     len_b;

    temp_a = *a_stack;
    temp_b = *b_stack;
    len_b = lst_size(temp_b);
    if (temp_a->index > temp_a->next->index)
        sa(a_stack);
    temp_a = *a_stack;
    int cost = 0;
    int cost2 = 0;
    while (len_b--)
    {
        while (temp_b->index > temp_a->index)
        {
            temp_a = temp_a->next;
            cost++;
        }
        temp_a = *a_stack;
        cost2 = cost;
        while (cost--)
        {
            ra(a_stack);
            temp_a = *a_stack;
        }
        pa(a_stack, b_stack);
        temp_a = *a_stack;
        temp_b = *b_stack;
        while (cost2--)
        {
            rra(a_stack);
            //temp_a = *a_stack;
        }
        cost = 0;
        temp_a = *a_stack;
        //temp_b = *b_stack;
    }
}
