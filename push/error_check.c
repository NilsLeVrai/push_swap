/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:13:36 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/28 16:28:16 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void is_sorted(struct s_index *head)
{
	t_index	*temp;

	temp = head;
	while (temp->next != NULL)
	{
		if (temp->value > temp->next->value)
			return ;
		temp = temp->next;
	}
	exit(EXIT_SUCCESS);
}

static void	check_duplicates(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atol(argv[i]) == ft_atol(argv[j]))
				exit((write(2, "Error\n", 6), EXIT_FAILURE));
			j++;
		}
		i++;
	}
}

static void	check_not_number(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] == '-' && j == 0)
				j++;
			if (ft_isdigit(argv[i][j]) == 0)
				exit((write(2, "Error\n", 6), EXIT_FAILURE));
			j++;
		}
		i++;
	}
}

static void	check_outrange_int(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_atol(argv[i]) > 2147483647 || ft_atol(argv[i]) < -2147483648)
			exit((write(2, "Error\n", 6), EXIT_FAILURE));
		i++;
	}
}

static void	check_args(int argc, char **argv)
{
	if (argc < 2 && argv[1] == NULL)
		exit(EXIT_SUCCESS);
	return ;
}

void	error_check(int argc, char **argv)
{
	check_args(argc, argv);
	check_outrange_int(argc, argv);
	check_not_number(argc, argv);
	check_duplicates(argc, argv);
	return ;
}

