/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:33:38 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/07 13:56:45 by niabraha         ###   ########.fr       */
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
	print_linked_list(a_stack); // visual check
	print_linked_list(b_stack); // visual check
	//sort(&a_stack, &b_stack);
	write(1, "After indexing:\n", 17);
	sort_index(a_stack); // visual check
	sort_index(b_stack); // visual check
}
