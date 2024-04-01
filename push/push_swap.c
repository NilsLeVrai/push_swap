/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:33:38 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/02 00:01:40 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	struct s_index	*a_stack;
	struct s_index	*b_stack;

	error_check(argc, argv);
	a_stack = create_list(argc, argv);
	b_stack = NULL;
	pb(&a_stack, &b_stack);
	sa(&a_stack);
	rra(&a_stack);
	sa(&a_stack);
	pa(&a_stack, &b_stack);
	rra(&a_stack);

/* 	printf("a_stack:\n");
	print_index(a_stack);
	printf("b_stack:\n");
	print_index(b_stack); */
	//free_lst(a_stack, b_stack);
}
