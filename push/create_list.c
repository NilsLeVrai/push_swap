/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:50:08 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/09 21:00:51 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"


static void	append(struct val_index **head_ref, int new_data)
{
	struct val_index	*t_val_index;
	struct val_index	*last;

	t_val_index = (struct val_index *) malloc(sizeof(struct val_index));
	last = *head_ref;
	t_val_index->value = new_data;
	t_val_index->next = NULL;
	if (*head_ref == NULL)
	{
		*head_ref = t_val_index;
		return ;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = t_val_index;
	return ;
}

struct val_index	*create_linked_list(int argc, char **argv)
{
	struct val_index	*head;
	int			i;
	int			data;

	head = NULL;
	i = 1;
	while (i < argc)
	{
		data = ft_atoi(argv[i]);
		append(&head, data);
		i++;
	}
	return (head);
}

void	print_linked_list(struct val_index *node)
{
	while (node != NULL)
	{
		printf("list: \n");
		printf("%d ", node->value);
		printf("index: \n");
		printf("%d ", node->index);
		node = node->next;
	}
	printf("\n");
}
	
