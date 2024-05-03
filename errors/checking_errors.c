/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:13:36 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/03 14:23:12 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error_check(int argc, char **argv)
{
	checking_args(argc, argv);
	check_not_number(argc, argv);
	check_outrange_int(argc, argv);
	check_duplicates(argc, argv);
	is_sorted(argc, argv);
	return ;
}
