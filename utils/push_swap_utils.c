/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:41:57 by niabraha          #+#    #+#             */
/*   Updated: 2024/05/16 12:52:04 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	lst_size(t_index *head)
{
	t_index	*temp;
	int		len;

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

	res = 0;
	neg = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == 43 || *nptr == 45)
	{
		if (*nptr == 45)
			neg *= (-1);
		nptr++;
	}
	while (*nptr >= 48 && *nptr <= 57)
	{
		res = res * 10 + *nptr - 48;
		nptr++;
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
