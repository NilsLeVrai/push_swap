/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:50:08 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/28 17:20:34 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	swap(int *a, int *b)
{
	int	nb;

	nb = *a;
	*a = *b;
	*b = nb;
}

void	sort_value_temp(struct s_index *head)
{
	t_index	*temp;
	t_index	*temp_2;

	temp = head;
	while (temp->next != NULL)
	{
		if (temp->value_temp > temp->next->value_temp)
		{
			swap(&(temp->value_temp), &(temp->next->value_temp));
			temp = head;
		}
		else
			temp = temp->next;
	}
	temp = head;
	while (temp)
	{
		temp_2 = head;
		while (temp->value != temp_2->value_temp)
			temp_2 = temp_2->next;
		temp->index = temp_2->index_temp;
		temp = temp->next;
	}
}

void	print_index(struct s_index *head)
{
	struct s_index	*temp;

	temp = head;
	sort_value_temp(temp);
	printf("\n\nt_head_index: \n\n");
	while (temp != NULL)
	{
		printf("value:%d \n", temp->value);
		printf("index: %d \n", temp->index);
		temp = temp->next;
	}
}

int	check_alloc(void *ptr)
{
	if (!ptr)
		exit(EXIT_FAILURE);
	return (0);
}

struct s_index	*create_list(int argc, char **argv)
{
	struct s_index	*head;
	struct s_index	*temp;
	int				i;

	i = 1;
	check_alloc(head = malloc(sizeof(struct s_index)));
	head->value = ft_atoi(argv[i]);
	head->value_temp = ft_atoi(argv[i]);
	head->index = i;
	head->index_temp = i;
	head->next = NULL;
	temp = head;
	while (argc > ++i)
	{
		check_alloc(temp->next = malloc(sizeof(struct s_index)));
		temp = temp->next;
		temp->value = ft_atoi(argv[i]);
		temp->value_temp = ft_atoi(argv[i]);
		temp->index = i;
		temp->index_temp = i;
		temp->next = NULL;
	}
	return (head);
}
