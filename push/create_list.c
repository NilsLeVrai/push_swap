/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:50:14 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/24 18:50:52 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	set_group(t_index *head)
{
	t_index	*temp;
	int		stack_len;
	int		div;

	temp = head;
	stack_len = lst_size(head);
	div = stack_len / 5;
	while (temp)
	{
		if (temp->index <= div)
			temp->group = 1;
		else if (temp->index <= 2 * div)
			temp->group = 2;
		else if (temp->index <= 3 * div)
			temp->group = 3;
		else if (temp->index <= 4 * div)
			temp->group = 4;
		else
			temp->group = 5;
		temp = temp->next;
	}
}

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

static int	check_alloc(void *ptr)
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
	sort_value_temp(head);
	set_group(head);
	return (head);
}
