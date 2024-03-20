/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:50:08 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/20 16:29:04 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

struct s_temp	*copy_list(struct s_index *head)
{
	struct s_temp	*head_copy;
	struct s_temp	*temp_copy;
	int	len;

	len = lst_size(head);
	head = (struct s_temp *)malloc(sizeof(struct s_temp));
	if (!head)
		return (NULL);
	head->value_copy = head->value;
	head->index_copy = 1;
	head->next_copy = NULL;
	temp_copy = head;
	while (--len)
	{
		temp->next_copy = (struct s_temp *)malloc(sizeof(struct s_temp));
		if (temp->next_copy == NULL)
			return (NULL);
		temp = temp->next_copy;
		temp->value_copy = head->value;
		temp->index_copy = head->index + 1;
		temp->next_copy = NULL;
	}
	return (head);
}


/*

index avec que des zeros = main
index ranges 1 2 3 4 = copy
*/
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
	//head->index = i;
	head->next = NULL;
	temp = head;
	while (argc > ++i)
	{
		temp->next = (struct s_index *)malloc(sizeof(struct s_index));
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		//temp->index = i;
		temp->value = ft_atoi(argv[i]);
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
		printf("value: %d \n", temp->value);
		printf("index: %d \n", temp->index);
		temp = temp->next;
	}
}

