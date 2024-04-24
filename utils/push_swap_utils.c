/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:41:57 by niabraha          #+#    #+#             */
/*   Updated: 2024/04/24 18:52:15 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	lst_size(struct s_index *head)
{
	int				len;
	struct s_index	*temp;

	len = 0;
	temp = head;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}

long	ft_atol(const char *nptr)
{
	long	res;
	long	neg;
	int		i;

	res = 0;
	neg = 1;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			neg *= (-1);
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		res = res * 10 + nptr[i] - 48;
		if (res > INT_MAX || (res > (long)INT_MAX + 1 && neg == -1))
			exit((write(2, "Error\n", 6), EXIT_FAILURE));
		i++;
	}
	return (res * neg);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long int	res;
	int			neg;
	int			i;

	res = 0;
	neg = 1;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			neg *= (-1);
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		res = res * 10 + nptr[i] - 48;
		i++;
	}
	return (res * neg);
}

int	bool_sorted(t_index *head)
{
	t_index	*temp;

	temp = head;
	while (temp->next != NULL)
	{
		if (temp->value > temp->next->value)
			return (1);
		temp = temp->next;
	}
	return (0);
}
