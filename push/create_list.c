/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:50:14 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/08 01:05:20 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	set_group(t_index *head, int len_a)
{
	t_index	*temp;
	int		group;
	int		i;
	int		size_group;

	if (len_a <= 10)
		group = 1;
	else if (len_a <= 100)
		group = 7;
	else
		group = 17;
	size_group = len_a / group;
	i = len_a - size_group;
	while (group--)
	{
		temp = head;
		while (temp)
		{
			if (temp->index >= i && temp->index <= i + size_group)
				temp->group = group;
			temp = temp->next;
		}
		i -= size_group;
	}
}

static void	swap(int *a, int *b)
{
	int	nb;

	nb = *a;
	*a = *b;
	*b = nb;
}

static void	sort_index(t_index *head)
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

static int	check_alloc(void *ptr)
{
	if (!ptr)
		exit(EXIT_FAILURE);
	return (0);
}

t_index	*create_list(int argc, char **argv)
{
	t_index	*head;
	t_index	*temp;
	int		i;

	i = 1;
	check_alloc(head = malloc(sizeof(t_index)));
	head->value = ft_atoi(argv[i]);
	head->value_temp = ft_atoi(argv[i]);
	head->index = i;
	head->index_temp = i;
	head->next = NULL;
	temp = head;
	while (argc > ++i)
	{
		check_alloc(temp->next = malloc(sizeof(t_index)));
		temp = temp->next;
		temp->value = ft_atoi(argv[i]);
		temp->value_temp = ft_atoi(argv[i]);
		temp->index = i;
		temp->index_temp = i;
		temp->next = NULL;
	}
	sort_index(head);
	set_group(head, i - 1);
	return (head);
}
