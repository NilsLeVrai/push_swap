/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:34:33 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/01 16:44:16 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main (int argc, char **argv)
{
	int nb_args;

	nb_args = 1;
	if (argc < 2)
		write(1, "Error\n", 6);
	while (nb_args < argc)
	{
		printf("oui %s", argv[nb_args]);
		args.value[args.count++] = ft_atoi(argv[nb_args]);
		nb_args++;
		printf("qw %d\n", *args.value);
	}
	printf("yo ma gueule%d\n", args.value[4]);
}
