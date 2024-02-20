/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:13:36 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/20 17:34:36 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

/* 
void check_not_in_range(int argc, char **argv)
{
	struct poly* tmp;

	tmp = a_stack;
	while (tmp != NULL)
	{
		printf("nils: %ld\n", ft_atol(tmp->value));
		if (tmp->value > 2147483647 || tmp->value < -2147483648)
			write(2, "Error too biglow\n", 18);
		tmp = tmp->next;
	}
	return ;
}

void check_duplicates(int argc, char **argv)
{
	struct poly* tmp;
	struct poly* tmp2;

	tmp = a_stack;
	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		while (tmp2 != NULL)
		{
			if (tmp->value == tmp2->value)
				write(2, "Error dup\n", 11);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	return ;
} */

void check_outrange_int(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (ft_atol(argv[i]) > 2147483647 || ft_atol(argv[i]) < -2147483648)
			write(2, "Error outrange\n", 16);
		i++;
	}
	printf("le iii%d", i);
}

void check_args(int argc, char **argv)
{
	if (argc < 2 && argv[1] == NULL)
		write(2, "Error no args\n", 15);
	return ;
}
void error_check(int argc, char **argv)
{
	check_args(argc, argv);
	check_outrange_int(argc, argv);
	return ;
}