/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:34:33 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/20 15:24:35 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_header.h"

int main(int argc, char* argv[])
{
    struct poly* a_stack;

	check_args(argc);
	a_stack = create_linked_list(argc, argv);
    printf("List:\n");
    print_linked_list(a_stack);
}
