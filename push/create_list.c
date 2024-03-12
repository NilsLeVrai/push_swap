/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:50:08 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/12 13:14:13 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

/* struct t_index	*create_list(int argc, char **argv)
{
	struct t_index	*head;
	struct t_index	*temp;
	int			i;

	i = 1;
	head = (struct t_index *)malloc(sizeof(struct t_index));
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
		temp->next = (struct t_index *)malloc(sizeof(struct t_index));
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

void	print_index(struct t_index *head)
{
	struct t_index	*temp;

	temp = head;
	while (temp != NULL)
	{
		printf("value: %d ", temp->value);
		printf("index: %d\n", temp->index);
		temp = temp->next;
	}
} */
