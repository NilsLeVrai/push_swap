/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:50:08 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/20 18:53:08 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void	append(struct s__list **head_ref, int new_data)
{
	struct s__list	*t_list;
	struct s__list	*last;

	t_list = (struct s__list *) malloc(sizeof(struct s__list));
	last = *head_ref;
	t_list->value = new_data;
	t_list->next = NULL;
	if (*head_ref == NULL)
	{
		*head_ref = t_list;
		return ;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = t_list;
	return ;
}

struct s__list	*create_linked_list(int argc, char **argv)
{
	struct s__list	*head;
	int				i;
	int				data;

	head = NULL;
	i = 1;
	while (i < argc)
	{
		data = ft_atol(argv[i]);
		append(&head, data);
		i++;
	}
	return (head);
}

void	print_linked_list(struct s__list *node)
{
	while (node != NULL)
	{
		printf("%d ", node->value);
		node = node->next;
	}
}
