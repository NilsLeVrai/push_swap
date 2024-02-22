/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:33:38 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/22 14:09:44 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

int	main(int argc, char **argv)
{
	struct poly	*a_stack;
	struct poly	*b_stack;

	error_check(argc, argv);
	a_stack = create_linked_list(argc, argv);
	a_stack = create_linked_list(argc, argv);
	sort(&a_stack, &b_stack);
	print_linked_list(a_stack);
	print_linked_list(b_stack);
}
