/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:50:08 by niabraha          #+#    #+#             */
/*   Updated: 2024/03/28 00:27:11 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void sort_value_temp(struct s_index *head)
{
	int		nb;
	t_index	*temp;
	t_index	*temp_2;
	int	i;

	i = 0;
	temp = head;
	while (temp->next != NULL)
	{
		if (temp->value_temp > temp->next->value_temp)
		{
			nb = temp->value_temp;
			temp->value_temp = temp->next->value_temp;
			temp->next->value_temp = nb;
			temp = head;
		}
		else
			temp = temp->next;
	}
	temp = head;
	while (temp->next)
	{
		temp_2 = head;
		while (temp->value != temp_2->value_temp && temp_2->next)
			temp_2 = temp_2->next;
		//nb = temp->index;
		temp->index = temp_2->index_temp;
		//temp_2->index = nb;
		temp = temp->next;
	}
	temp = head;
	while (temp)
	{
		nb = lst_size(head);
		while (i < nb)
		{
			while(i != temp->index && temp)
			{
				temp = temp->next;
			}
			i++;
			temp = head;
		}
		temp->index = i;
	}
	/* while (temp->index_temp)
	{
		//if (temp->index)
	} */
	//printf("index temp : %d\n", temp->index);
	//temp->index = 1;
	//printf("allo : %d\n", temp_2->index_temp);
}

//la pour tester


void yellow () {
  printf("\033[1;33m");
}

void red () {
  printf("\033[1;31m");
}

void green () {
  printf("\033[1;32m");
}

void white () {
  printf("\033[1;37m");
}

void	print_index(struct s_index *head)
{
	struct s_index	*temp;

	temp = head;
	sort_value_temp(temp);
	printf("\n\nt_head_index: \n\n");
	while (temp != NULL)
	{
		green();
		printf("value:%d \n", temp->value);
		red();
		//printf("value_temp:%d \n", temp->value_temp);
		yellow();
		printf("index: %d \n", temp->index);
		red();
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
		// new line below
		temp->index_temp = i;
		temp->next = NULL;
	}
	return (head);
}

