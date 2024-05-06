/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niabraha <niabraha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:49:23 by niabraha          #+#    #+#             */
/*   Updated: 2024/02/23 17:16:40 by niabraha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

char	*ft_strchr(const char *s, int c);
int		args_char(va_list args);
int		args_digit(va_list args);
int		args_lowerhexa(va_list args);
int		args_percent(void);
int		args_pointer(va_list args);
int		args_string(va_list args);
int		args_unsigned(va_list args);
int		args_upperhexa(va_list args);
int		ft_printf(const char *format, ...);
int		ft_putchar_fd_safe(char c, int fd);
int		ft_putnbr_base(unsigned long nbr, const char *base);
int		ft_putstr_safe(char *str);
size_t	ft_strlen(const char *s);

#endif
