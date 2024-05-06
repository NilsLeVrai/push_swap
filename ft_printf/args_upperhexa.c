/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_upperhexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 00:44:01 by niabraha          #+#    #+#             */
/*   Updated: 2023/12/11 14:51:50 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	args_upperhexa(va_list args)
{
	unsigned int	nbr;

	nbr = va_arg(args, unsigned int);
	return (ft_putnbr_base(nbr, "0123456789ABCDEF"));
}
