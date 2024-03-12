/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:33:38 by niabraha          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/03/11 18:21:42 by niabraha         ###   ########.fr       */
=======
/*   Updated: 2024/03/09 21:00:17 by niabraha         ###   ########.fr       */
>>>>>>> refs/remotes/origin/main
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

int	main(int argc, char **argv)
{
	struct val_index	*a_stack;
	struct val_index	*b_stack;

	error_check(argc, argv);
	a_stack = create_list(argc, argv);
	b_stack = NULL;
	print_list(a_stack);
	print_list(b_stack);
}
