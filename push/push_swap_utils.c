/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:41:57 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/13 15:28:35 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

int	lst_size(struct s_index *head)
{
	int				len;
	struct s_index	*temp;

	len = 0;
	temp = head;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
