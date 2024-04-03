/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:50:08 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/03 16:31:39 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void set_quartile(t_index *head)
{
	t_index	*temp;
	int	stack_len;
	int	div;

	temp = head;
	stack_len = lst_size(head);
	div = stack_len / 4;
	while (temp->next != NULL)
	{
		if (temp->value <= div)
			temp->quartile = 1;
		else if (temp->value <= 2 * div)
			temp->quartile = 2;
		else if (temp->value <= 3 * div)
			temp->quartile = 3;
		else
			temp->quartile = 4;
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
		temp->target_pos = temp_2->initial_pos;
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
		printf("quartile:%d \n", temp->quartile);
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
	head->target_pos = i;
	head->initial_pos = i;
	head->next = NULL;
	temp = head;
	while (argc > ++i)
	{
		check_alloc(temp->next = malloc(sizeof(struct s_index)));
		temp = temp->next;
		temp->value = ft_atoi(argv[i]);
		temp->value_temp = ft_atoi(argv[i]);
		temp->target_pos = i;
		temp->initial_pos = i;
		temp->next = NULL;
	}
	set_quartile(head);
	return (head);
}
