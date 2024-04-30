/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:33:38 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/30 19:19:33 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* void print_index(t_index *a_stack)
{
	t_index *temp;

	temp = a_stack;
	while (temp)
	{
		printf("index: %d group: %d\n", temp->index, temp->group);
		temp = temp->next;
	}
} */

int	main(int argc, char **argv)
{
	struct s_index	*a_stack;
	struct s_index	*b_stack;
	(void)b_stack;

	error_check(argc, argv);
	a_stack = create_list(argc, argv);
	b_stack = NULL;
	//print_index(a_stack);
	humongus_sort(&a_stack, &b_stack);
	//free_lst(a_stack, b_stack);
}
