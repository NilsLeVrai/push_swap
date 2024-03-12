/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:50:08 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/12 13:56:11 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

// poly s_index
// t_mono t_index

struct s_index	*create_list(int argc, char **argv)
{
	struct s_index	*head;
	struct s_index	*temp;
	int			i;

	i = 1;
	head = (struct s_index *)malloc(sizeof(struct s_index));
	if (!head)
		return (NULL);
	head->prev = NULL;
	head->value = ft_atoi(argv[i]);
	head->index = i;
	head->next = NULL;
	temp = head;
	i++;
	while (i < argc)
	{
		temp->next = (struct s_index *)malloc(sizeof(struct s_index));
		if (temp->next == NULL)
			return (NULL);
		temp->next->prev = temp;
		temp = temp->next;
		temp->value = ft_atoi(argv[i]);
		temp->index = i;
		temp->next = NULL;
		i++;
	}
	return (head);
}

void	print_index(struct s_index *head)
{
	struct s_index	*temp;

	temp = head;
	while (temp != NULL)
	{
		printf("value: %d ", temp->value);
		printf("index: %d\n", temp->index);
		temp = temp->next;
	}
}
