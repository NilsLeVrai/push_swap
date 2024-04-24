/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humongus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:52:57 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/24 17:30:39 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

#include <stdio.h>
#include <time.h>

void check_infinite_loop() {
    // Record the start time
    time_t start_time = time(NULL);
    
    // Your loop
    while (1) {
        // Your loop code goes here
        
        // Check if 2 seconds have elapsed
        if (difftime(time(NULL), start_time) >= 2) {
            printf("Two seconds have passed. Breaking out of loop.\n");
            break;
        }
    }
}

void humongus_sort(t_index **a_stack, t_index **b_stack)
{
	int len_a;
	
	len_a = lst_size(*a_stack);
	while (len_a-- > 0)
	{
		if ((*a_stack)->group == 1)
		{
			pb(a_stack, b_stack);
			rb(b_stack);
		}
		else if ((*a_stack)->group == 2)

			pb(a_stack, b_stack);

		else
			ra(a_stack);
	}
	len_a = lst_size(*a_stack);
	while (len_a--)
	{
		if ((*a_stack)->group == 3)
			pb(a_stack, b_stack);
		else
			ra(a_stack);
	}
	len_a = lst_size(*a_stack);
	while (len_a--)
	{
		if ((*a_stack)->group == 4)
			pb(a_stack, b_stack);
		else
			ra(a_stack);
	}
	len_a = lst_size(*a_stack);
	while (len_a-- != 3)
	{
		if ((*a_stack)->group == 5)
			pb(a_stack, b_stack);
		else
		{
			ra(a_stack);
			printf("debug\n");
		}
	}
	final_sort(a_stack, b_stack);
}
