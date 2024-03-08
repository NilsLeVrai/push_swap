/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:50:08 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/08 18:40:23 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"


static void	append(struct poly **head_ref, int new_data)
{
	struct poly	*t_mono;
	struct poly	*last;

	t_mono = (struct poly *) malloc(sizeof(struct poly));
	last = *head_ref;
	t_mono->value = new_data;
	t_mono->next = NULL;
	if (*head_ref == NULL)
	{
		*head_ref = t_mono;
		return ;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = t_mono;
	return ;
}

struct poly	*create_linked_list(int argc, char **argv)
{
	struct poly	*head;
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

void	print_linked_list(struct poly *node)
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
	
