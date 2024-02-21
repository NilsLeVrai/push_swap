/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:33:38 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/21 18:45:13 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

int	main(int argc, char **argv)
{
	struct poly	*a_stack;
	struct poly	*b_stack;
	int i = 1;

	error_check(argc, argv);
	a_stack = create_linked_list(argc, argv);
	b_stack = NULL;
	printf("Beginning:\n");
	printf("A: ");
	print_linked_list(a_stack);
	printf("B: ");
	printf("\n");
	print_linked_list(b_stack);

	pb(&a_stack, &b_stack);
	printf("pb\n");
	printf("[%d] A: ", i);
	print_linked_list(a_stack);
	printf("[%d] B: ",i);
	print_linked_list(b_stack);
	printf("\n");
	i++;

	pb(&a_stack, &b_stack);
	printf("pb\n");
	printf("[%d] A: ", i);
	print_linked_list(a_stack);
	printf("[%d] B: ",i);
	print_linked_list(b_stack);
	printf("\n");
	i++;

	ra(&a_stack);
	printf("ra\n");
	printf("[%d] A: ", i);
	print_linked_list(a_stack);
	printf("[%d] B: ",i);
	print_linked_list(b_stack);
	printf("\n");
	i++;

	rb(&b_stack);
	printf("rb\n");
	printf("[%d] A: ", i);
	print_linked_list(a_stack);
	printf("[%d] B: ",i);
	print_linked_list(b_stack);
	printf("\n");
	i++;

	rr(&a_stack, &b_stack);
	printf("rr\n");
	printf("[%d] A: ", i);
	print_linked_list(a_stack);
	printf("[%d] B: ",i);
	print_linked_list(b_stack);
	printf("\n");
	i++;

	sa(&a_stack);
	printf("sa\n");
	printf("[%d] A: ", i);
	print_linked_list(a_stack);
	printf("[%d] B: ",i);
	print_linked_list(b_stack);
	printf("\n");
	i++;

	sb(&b_stack);
	printf("sb\n");
	printf("[%d] A: ", i);
	print_linked_list(a_stack);
	printf("[%d] B: ",i);
	print_linked_list(b_stack);
	printf("\n");
	i++;
	
	printf("End A:\n");
	print_linked_list(a_stack);
	printf("End B:\n");
	print_linked_list(b_stack);
}
