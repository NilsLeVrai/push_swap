/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:33:38 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/06 16:02:24 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/* ft */

int	main(int argc, char **argv)
{
	t_index	*a_stack;
	t_index	*b_stack;

	error_check(argc, argv);
	a_stack = create_list(argc, argv);
	b_stack = NULL;
	//print_lst(a_stack);
	//(void)b_stack;
	find_sort(&a_stack, &b_stack);
	free_lst(&a_stack, &b_stack);
}
