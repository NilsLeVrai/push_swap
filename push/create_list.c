/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:50:08 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/12 15:22:18 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

/* void sort_index(struct s_index *head)
{
	struct s_index *tmp;
	struct s_index *super_tmp;

	tmp = head;
	super_tmp = tmp;
	while (tmp->next != NULL)
	{
		if (tmp->index > tmp->next->index)
		{
			super_tmp = tmp->index;
			tmp->index = tmp->next->index;
			tmp->next->index = super_tmp;
			tmp = head;
		}
		else
			tmp = tmp->next;
	}
} */

struct s_index	*create_list(int argc, char **argv)
{
	struct s_index	*head;
	struct s_index	*temp;
	int				i;

	i = 1;
	head = (struct s_index *)malloc(sizeof(struct s_index));
	if (!head)
		return (NULL);
	head->prev = NULL;
	head->value = ft_atoi(argv[i]);
	head->index = i;
	head->next = NULL;
	temp = head;
	while (argc > ++i)
	{
		temp->next = (struct s_index *)malloc(sizeof(struct s_index));
		if (temp->next == NULL)
			return (NULL);
		temp->next->prev = temp;
		temp = temp->next;
		temp->value = ft_atoi(argv[i]);
		temp->index = i;
		temp->next = NULL;
	}
	return (head);
}

void	print_index(struct s_index *head)
{
	struct s_index	*temp;

	temp = head;
	//sort_index(temp);
	while (temp != NULL)
	{
		printf("value: %d \n", temp->value /*,temp->index*/);
		temp = temp->next;
	}
}
