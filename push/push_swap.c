/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:33:38 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/22 11:01:09 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

int	main(int argc, char **argv)
{
	struct poly	*a_stack;
	struct poly	*b_stack;

	error_check(argc, argv);
	a_stack = create_linked_list(argc, argv);
	b_stack = NULL;
	printf("Beginning:\n");
	printf("A: ");
	print_linked_list(a_stack);
	printf("B: ");
	printf("\n");
	print_linked_list(b_stack);
}
