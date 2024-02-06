/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:34:33 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/06 17:25:34 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main (int argc, char **argv)
{
	int		nb_args;
	mono	*stack_a;
	mono	*stack_b;

	nb_args = 0;
	stack_a = NULL;
	stack_b = NULL;
	check_number_args(argc);
	stack_a = ft_create_list(argc, argv);
	if (argc < 2)
		exit(0);
}
