/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:50:08 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/20 21:32:12 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

struct s_index *ultima_sort(struct s_temp *head_temp, struct s_index *head_index)
{
	t_temp *t_head_temp;
	t_index *t_head_index;
	int stored_value;
	int len;
	int i;

	t_head_temp = head_temp;
	t_head_index = head_index;
	len = lst_size(head_index);
	i = 0;
	while (len > i)
	{
		stored_value = t_head_temp->value_copy;
		while (stored_value != t_head_index->value)
			t_head_index = t_head_index->next;
		t_head_index->index = i;
		i++;
		stored_value = t_head_temp->next_copy->value_copy;
		t_head_index = head_index;
		t_head_temp = head_temp;
	}
	return (head_index);
}

void sort_index(struct s_temp *head)
{
	t_temp *temp;
	t_temp *temp2;
	int temp_value;

	temp = head;
	while (temp != NULL)
	{
		temp2 = temp->next_copy;
		while (temp2 != NULL)
		{
			if (temp->value_copy > temp2->value_copy)
			{
				temp_value = temp->value_copy;
				temp->value_copy = temp2->value_copy;
				temp2->value_copy = temp_value;
			}
			temp2 = temp2->next_copy;
		}
		temp = temp->next_copy;
	}
}

struct s_temp *copy_values(t_index *head)
{
	t_temp *new_head = NULL;
    t_temp *new_tail = NULL;

    while (head != NULL)
    {
        t_temp *new_node = malloc(sizeof(t_temp));
        new_node->value_copy = head->value;
        new_node->index_copy = head->index;
        new_node->next_copy = NULL;
        if (new_head == NULL)
        {
            new_head = new_node;
            new_tail = new_node;
        }
        else
        {
            new_tail->next_copy = new_node;
            new_tail = new_node;
        }
        head = head->next;
    }
    return new_head;
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
	head->value = ft_atoi(argv[i]);
	head->index = i;
	head->next = NULL;
	temp = head;
	while (argc > ++i)
	{
		temp->next = (struct s_index *)malloc(sizeof(struct s_index));
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		temp->index = i;
		temp->value = ft_atoi(argv[i]);
		temp->next = NULL;
	}
	return (head);
}


//la pour tester

void	print_index(struct s_index *head)
{
	struct s_index	*temp;
	struct s_temp	*temp_copy;
	

	temp = head;
	temp_copy = copy_values(head);
	sort_index(temp_copy);
	temp = ultima_sort(temp_copy, temp);
	printf("\nt_index: \n");
	while (temp != NULL)
	{
		printf("value: %d \n", temp->value);
		printf("index: %d \n", temp->index);
		temp = temp->next;
	}
	printf("\nt_temp: \n");
	while (temp_copy != NULL)
	{
		printf("value: %d \n", temp_copy->value_copy);
		printf("index: %d \n", temp_copy->index_copy);
		temp_copy = temp_copy->next_copy;
	}
}

