/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:13:36 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/20 17:08:18 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

/* check_not_int(int argc, char **argv)
{
	struct poly* tmp;

	tmp = a_stack;
	while (tmp != NULL)
	{
		if (tmp->value == 0)
			write(2, "Error not int\n", 6);
		tmp = tmp->next;
	}
	return ;
}

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

void check_args(int argc)
{
	if (argc < 2)
		write(2, "Error no args\n", 15);
	return ;
}
int error_check(int argc, char **argv)
{
	
	/* check_not_in_range(int argc, char **argv);
	check_duplicates(int argc, char **argv);
	check_not_int(int argc, char **argv); */
	return ;
}