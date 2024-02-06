/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:48:19 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/06 13:57:10 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void add_to_list(struct poly** head_tmp, int value)
{
	struct poly* mono = (struct poly*)malloc(sizeof(struct poly));
	struct poly* last = head_tmp;

	mono->value = value_tmp;
	mono->next = NULL;

	if (head_tmp = NULL)
	{
		*head_tmp = mono;
		return ;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = mono;
	return ;
}

struct poly* ft_create_list(int argc, char **argv)
{
	struct poly* head = NULL;
	int i;
	int data;

	i = 1;
	while (i < argc)
	{
		data = ft_atoi(argv[i]);
		add_to_list(&head, data);
		i++;
	}
}

void    parsing_error(int argc, char **argv)
{
	struct poly* head = create_list(argc, argv);
	if (argc < 2)
		exit(0);
}
