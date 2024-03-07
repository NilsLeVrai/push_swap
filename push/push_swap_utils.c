/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:03:16 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/07 16:37:59 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

int	lstsize(struct poly *node)
{
	int	i;

	i = 0;
	while (node != NULL)
	{
		node = node->next;
		i++;
	}
	return (i);
}
