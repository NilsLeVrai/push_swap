/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humongus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:52:57 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/03 16:51:09 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void humongus_sort(t_index **a_stack, t_index **b_stack)
{
	t_index	*temp_a;
	t_index	*temp_b;

	temp_a = *a_stack;
	temp_b = *b_stack;
	if (temp_a->quartile == 1)
	{
		pb(a_stack, b_stack);
		if (temp_b->quartile < temp_b->next->quartile)
		{
			rb(b_stack);
		}
	}
	else if (temp_a->quartile == 2)
	{
		pb(a_stack, b_stack);
	}
	else if (temp_a->quartile == 3)
	{
		while (temp_a->next->quartile == 3 || temp_a->next->quartile == 4)
		{
			ra(a_stack);
			temp_a = temp_a->next;
		}
		if (temp_a->quartile == 1)
		{
			pb(a_stack, b_stack);
			if (temp_b->quartile < temp_b->next->quartile)
				rb(b_stack);
		}
		else if (temp_a->quartile == 2)
		{
			pb(a_stack, b_stack);
		}
		else
		{
			temp_a = temp_a->next;
			
		}
			
	}
	else
		ra(a_stack);
	temp_a = temp_a->next;
}


/*
faire des groupes de 4
1 quartile en dessous de pile b
2 quartile au dessus de pile b
3 quartile au dessus de pile a
4 quartile en dessous de pile a

check premier element de la pile a
  -> le bouger

 14
 61
 25
 57
 37
  7
 43
 62
 34
 54
 55
 80
 56
 30
 66
 88
 94
 27
 60
 89
 32
  9
 38
 22
 86
  3
  2
 26
 28
 47
  1
 19
 69
 63
 93
 70
 72
100
 20
 42
 77
 65
 64
  8
 40
 50
 10
 29
 81
 33
 13
 78
 74
 96
 52
 87
 15
 45
 71
 98
 12
 99
 75
 68
 83
 44
 21
 41
 11
 91
  5
 58
 23
 67
 39
 35
 95
 79
 49
 17
 82
  6
 18
 31
 46
 90
 51
 84
 73
 24
 59
 53
 48
 97
 16
 92
 85
  4
 76
 36

*/
