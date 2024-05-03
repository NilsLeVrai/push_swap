/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:33:38 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/03 14:19:21 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	print_lst(t_index *head)
{
	t_index	*temp;

	temp = head;
	while (temp != NULL)
	{
		ft_printf("value = %d, index = %d, group = %d\n",
			temp->value, temp->index, temp->group);
		temp = temp->next;
	}
}

int	main(int argc, char **argv)
{
	t_index	*a_stack;
	t_index	*b_stack;

	error_check(argc, argv);
	a_stack = create_list(argc, argv);
	(void)b_stack;
	b_stack = NULL;
	print_lst(a_stack);
	find_sort(&a_stack, &b_stack);
	//free_lst(&a_stack, &b_stack);
}
