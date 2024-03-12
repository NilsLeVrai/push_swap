/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:50:08 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/12 12:38:47 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

struct poly	*create_list(int argc, char **argv)
{
	struct poly	*head;
	struct poly	*temp;
	int			i;

	i = 1;
	head = (struct poly *)malloc(sizeof(struct poly));
	if (head == NULL)
		return (NULL);
	head->prev = NULL;
	head->value = ft_atoi(argv[i]);
	head->index = i;
	head->next = NULL;
	temp = head;
	i++;
	while (i < argc)
	{
		temp->next = (struct poly *)malloc(sizeof(struct poly));
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

void	print_list(struct poly *head)
{
	struct poly	*temp;

	temp = head;
	while (temp != NULL)
	{
		printf("value: %d ", temp->value);
		printf("\n");
		printf("index: %d\n", temp->index);
		printf("\n");
		temp = temp->next;
	}
}
