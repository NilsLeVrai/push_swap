/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:33:38 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/20 16:47:11 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

void append(struct poly** head_ref, int new_data)
{
    struct poly* mono = (struct poly*)malloc(sizeof(struct poly));
    struct poly* last = *head_ref;  
    mono->value = new_data;
    mono->next = NULL;

    if (*head_ref == NULL)
	{
        *head_ref = mono;
        return ;
    }
    while (last->next != NULL) 
        last = last->next;
    last->next = mono;
    return ;
}

struct poly* create_linked_list(int argc, char* argv[])
{
    struct poly* head;
	int i;
	int data;

	head = NULL;
	i = 1;
	while (i < argc)
	{
        data = ft_atol(argv[i]); 
        append(&head, data);
		i++;
    }
    return (head);
}

void print_linked_list(struct poly* node)
{
    while (node != NULL)
	{
        printf("%d ", node->value);
        node = node->next;
    }
}