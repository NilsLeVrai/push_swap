/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:44:16 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/28 17:01:58 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	is_sorted(int argc, char **argv)
{
	int	i;

	i = 1;
	while (argc - 1 > i)
	{
		if (ft_atoi(argv[i]) > ft_atoi(argv[i + 1]))
			return ;
		printf("oui: %d\n", ft_atoi(argv[i]));
		i++;
	}
	exit(EXIT_SUCCESS);
}

void	check_duplicates(int argc, char **argv)
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

void	check_not_number(int argc, char **argv)
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

void	check_outrange_int(int argc, char **argv)
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

void	check_args(int argc, char **argv)
{
	if (argc < 2 && argv[1] == NULL)
		exit(EXIT_SUCCESS);
	return ;
}
