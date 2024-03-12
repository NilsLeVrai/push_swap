/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:50:08 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/12 14:50:52 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void sort_index(struct s_index *head)
{
	int	len;

	len = lst_size(head);
}

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
		temp->next = NULL;
	}
	sort_index(head);
	return (head);
}

void	print_index(struct s_index *head)
{
	struct s_index	*temp;

	temp = head;
	while (temp != NULL)
	{
		printf("value: %d\n", temp->value);
		temp = temp->next;
	}
}
