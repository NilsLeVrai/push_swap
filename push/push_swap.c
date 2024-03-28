/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:33:38 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/28 16:41:44 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

int	main(int argc, char **argv)
{
	struct s_index	*a_stack;
	struct s_index	*b_stack;

	error_check(argc, argv);
	is_sorted(argc, argv);
	a_stack = create_list(argc, argv);
	b_stack = NULL;
	printf("a_stack:\n");
	print_index(a_stack);
	printf("b_stack:\n");
	print_index(b_stack);
}
