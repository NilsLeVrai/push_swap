/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:50:08 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/26 18:38:15 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

/* void find_smallest(struct s_index *head)
{
	struct s_index	*temp;
	int 			smallest;
	int				len;

	temp = head;
	smallest = temp->value;
	len = lst_size(temp);
	while (len--)
	{
		if (temp->value < smallest)
			smallest = temp->value;
		temp = temp->next;
	}
	printf("smallest: %d\n", smallest);
}
*/
void sort_index(struct s_index *head)
{
	struct s_index	*temp;
	struct s_index	*temp2;
	int				swap;

	temp = head;
	while (temp->next != NULL)
	{
		temp2 = temp->next;
		while (temp2 != NULL)
		{
			if (temp->value > temp2->value)
			{
				swap = temp->value;
				temp->value = temp2->value;
				temp2->value = swap;
				swap = temp->index;
				temp->index = temp2->index;
				temp2->index = swap;
			}
			temp2 = temp2->next;
		}
		temp = temp->next;
	}
} 

//la pour tester

void	print_index(struct s_index *head)
{
	struct s_index	*temp;

	temp = head;
	//sort_index(temp);
	printf("\nt_head_index: \n\n");
	while (temp != NULL)
	{
		printf("value: %d \n", temp->value);
		printf("value_temp: %d \n", temp->value_temp);
		printf("index: %d \n", temp->index);
		printf("index_temp: %d \n", temp->index_temp);
		temp = temp->next;
	}
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
	head->value_temp = ft_atoi(argv[i]);
	head->index = i;
	head->index_temp = i;
	head->next = NULL;
	temp = head;
	while (argc > ++i)
	{
		temp->next = (struct s_index *)malloc(sizeof(struct s_index));
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		temp->value = ft_atoi(argv[i]);
		temp->value_temp = ft_atoi(argv[i]);
		temp->index = i;
		temp->index_temp = i;
		temp->next = NULL;
	}
	return (head);
}

