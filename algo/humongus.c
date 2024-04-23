/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humongus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:52:57 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/22 23:34:56 by niabraha         ###   ########.fr       */
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
	t_index	*temp_a;
	t_index	*temp_b;

	temp_a = *a_stack;
	temp_b = *b_stack;
	int len_a = lst_size(temp_a);
	if (temp_b)
		write(1, "b_stack is not empty\n", 22);
	while (len_a-- > 0)
	{
		if (temp_a->group == 1)
		{
			pb(a_stack, b_stack);
			rb(b_stack);
		}
		else if (temp_a->group == 2)
		{
			pb(a_stack, b_stack);
		}
		else
		{
			ra(a_stack);
		}
		temp_a = *a_stack;
		temp_b = *b_stack;
	}
	len_a = lst_size(temp_a);
	while (len_a--)
	{
		if (temp_a->group == 3)
		{
			pb(a_stack, b_stack);
		}
		else
		{
			ra(a_stack);
		}
		temp_a = *a_stack;
		temp_b = *b_stack;
	}
	len_a = lst_size(temp_a);
	while (len_a--)
	{
		if (temp_a->group == 4)
		{
			pb(a_stack, b_stack);
		}
		else
		{
			ra(a_stack);
		}
		temp_a = *a_stack;
		temp_b = *b_stack;
	}
	len_a = lst_size(temp_a);
	printf("len_a: %d\n", len_a);
	while (len_a-- != 2)
	{
		if (temp_a->group == 5)
		{
			pb(a_stack, b_stack);
		}
		else
		{
			ra(a_stack);
			printf("debug\n");
		}
		temp_a = *a_stack;
		temp_b = *b_stack;
	}
	///////////////////////////
	///////////////////////////
	///////////////////////////
	///////////////////////////
	///////////////////////////
	///////////////////////////
	///////////////////////////
	printf("------------middle------------\n");
	final_sort(a_stack, b_stack);
	
}
