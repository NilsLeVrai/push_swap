/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:33:38 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/19 15:01:50 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	struct s_index	*a_stack;
	struct s_index	*b_stack;

	write(1, "Niiiils\n", 8);
	error_check(argc, argv);
	a_stack = create_list(argc, argv);
	b_stack = NULL;
	//print_index(a_stack);
	//print_index(b_stack);
	humongus_sort(&a_stack, &b_stack);
	//free_lst(a_stack, b_stack);
}
